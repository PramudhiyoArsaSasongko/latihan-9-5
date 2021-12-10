#include<ncurses.h>
using namespace std;

int main(){
	//PramudhiyoArsaSasongko
	//2117051063
	
	initscr();
	char nama[50];
	char alamat[100];
	char hobi[20];
	
    printw("Masukkan Nama Anda   :");getstr(nama);
    printw("Masukkan Alamat Anda :");getstr(alamat);
    printw("Masukkan Hobi Anda   :");getstr(hobi);
	
	mvprintw(5,0,"Nama   : ");printw(nama);
	mvprintw(6,0,"Alamat : ");printw(alamat);
	mvprintw(7,0,"Hobi   : ");printw(hobi);
	
	getch();
	
	endwin();
}
