/*
 *Project 6
 *Tarci Castillo
 *
 *The ﬁrst byte is the ASCII code for the character, 
 *and the second byte tells what color to draw the character
 *Assembly ﬁle kernel.asm --this ﬁle contains a function putInMemory, 
 *which writes a byte to memory. Function putInMemory can be called from your C
 *program and takes 3 parameters:
 *--The ﬁrst hexadecimal digit of the address, times 0x1000 --this is called the segment
 *--The remaining four hexadecimal digits of the address.
 *--The character to be written
 *EXAMPLE:
 *	putInMemory(0xB000, 0x8140, 'A');
 *	putInMemory(0xB000, 0x8141, 0x7);
 */

int main() {
	/*
	 *function implemented in assembly
	 *LINE1: PARAMETERS:(segment, remaining 4 hex digi of address, character to write) 
	 *prints the character in the color white @ beginning of 3 line of screen
     *LINE2: PARAMETERS:(segment, remanining address, color [white in hex])
    */
    putInMemory(0xB000, 0x8140, 'H');
    putInMemory(0xB000, 0x8141, 0x7);
    putInMemory(0xB000, 0x8142, 'e');
    putInMemory(0xB000, 0x8143, 0x7);
    putInMemory(0xB000, 0x8144, 'l');
    putInMemory(0xB000, 0x8145, 0x7);
    putInMemory(0xB000, 0x8146, 'l');
    putInMemory(0xB000, 0x8147, 0x7);
    putInMemory(0xB000, 0x8148, 'o');
    putInMemory(0xB000, 0x8149, 0x7);
    putInMemory(0xB000, 0x814A, ' ');
    putInMemory(0xB000, 0x814B, 0x7);
    putInMemory(0xB000, 0x814C, 'W');
    putInMemory(0xB000, 0x814D, 0x7);
    putInMemory(0xB000, 0x814E, 'o');
    putInMemory(0xB000, 0x814F, 0x7);
    putInMemory(0xB000, 0x8150, 'r');
    putInMemory(0xB000, 0x8151, 0x7);
    putInMemory(0xB000, 0x8152, 'l');
    putInMemory(0xB000, 0x8153, 0x7);
    putInMemory(0xB000, 0x8154, 'd');
    putInMemory(0xB000, 0x8155, 0x7);
    putInMemory(0xB000, 0x8156, '!');
    putInMemory(0xB000, 0x8157, 0x7);

	while(1) {
		/*loops infinitly*/
	};
}