/* Jim Gildersleeve, Brian Suchy, and Simas Guilherme */
int main() {
  putInMemory(0xB000, 0x8140, 'H');
  putInMemory(0xB000, 0x8141, 0x2);
  putInMemory(0xB000, 0x8142, 'e');
  putInMemory(0xB000, 0x8143, 0x2);
  putInMemory(0xB000, 0x8144, 'l');
  putInMemory(0xB000, 0x8145, 0x2);
  putInMemory(0xB000, 0x8146, 'l');
  putInMemory(0xB000, 0x8147, 0x2);
  putInMemory(0xB000, 0x8148, 'o');
  putInMemory(0xB000, 0x8149, 0x2);
  putInMemory(0xB000, 0x814a, ' ');
  putInMemory(0xB000, 0x814b, 0x2);
  putInMemory(0xB000, 0x814c, 'W');
  putInMemory(0xB000, 0x814d, 0x2);
  putInMemory(0xB000, 0x814e, 'o');
  putInMemory(0xB000, 0x814f, 0x2);
  putInMemory(0xB000, 0x8150, 'r');
  putInMemory(0xB000, 0x8151, 0x2);
  putInMemory(0xB000, 0x8152, 'l');
  putInMemory(0xB000, 0x8153, 0x2);
  putInMemory(0xB000, 0x8154, 'd');
  putInMemory(0xB000, 0x8155, 0x2);

  while (1) {
  }
  return 0;
}