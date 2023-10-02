#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct
{
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} ElfHeader;
void print_elf_header(const ElfHeader *header) {
    printf("ELF Header:\n");
    printf("  Magic: ");
    for (int i = 0; i < 16; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", header->e_ident[4] == 1 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[6]);
    printf("  OS/ABI:                            %d\n", header->e_ident[7]);
    printf("  ABI Version:                       %d\n", header->e_ident[8]);
    printf("  Type:                              %d (EXEC)\n", header->e_type);
    printf("  Machine:                           %d\n", header->e_machine);
    printf("  Version:                           %d\n", header->e_version);
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
    printf("  Start of program headers:          %lu (bytes into file)\n", (unsigned long)header->e_phoff);
    printf("  Start of section headers:          %lu (bytes into file)\n", (unsigned long)header->e_shoff);
    printf("  Flags:                             0x%x\n", header->e_flags);
    printf("  Size of this header:               %u (bytes)\n", header->e_ehsize);
    printf("  Size of program headers:           %u (bytes)\n", header->e_phentsize);
    printf("  Number of program headers:         %u\n", header->e_phnum);
    printf("  Size of section headers:           %u (bytes)\n", header->e_shentsize);
    printf("  Number of section headers:         %u\n", header->e_shnum);
    printf("  Section header string table index: %u\n", header->e_shstrndx);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);

    if (fd == -1)
    {
        perror("Error opening file");
        return 98;
    }
    ElfHeader header;
    ssize_t bytes_read = read(fd, &header, sizeof(ElfHeader));

    if (bytes_read != sizeof(ElfHeader) || header.e_ident[0] != 0x7F || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        fprintf(stderr, "%s is not an ELF file\n", filename);
        close(fd);
        return 98;
    }
print_elf_header(&header);

    close(fd);
    return 0;
}
