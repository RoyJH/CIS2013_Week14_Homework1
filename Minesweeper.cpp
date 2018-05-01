#include <iostream>
#include <cstring>
using namespace std;
// int rows;
// int cols
char numbers[49][49];
int rows;
int cols;
int bombs;
class game{
	public:
		string get_name(){
			return name;
		}
		string set_name(){
			name = "Mine Sweeper";
			return name;
		}
		int get_score(){
			return score;
		}
		int set_score(){
			score=0;
		}
	private:
		string name;
		int score;
};

class minesweeper: public game{
	private:
		//int board_rows;
	//	int board_cols;
		int board_mines;
	public:
			int b_rows;
			int b_cols;
			int x_plot;
			int y_plot;
			
			int **board;
		void make(){
			
			board = new int* [b_rows];
			for (int c = 0; c < b_rows; c++)
				board[c] = new int [b_cols];
			
			for(int d =0; d < b_rows; d++)
					for (int c = 0; c < b_rows; c++)
						board [c][d] = 0;
		}
		void print_board(){
			cout<<endl<<"       ";
			for (int i=0; i<rows; i++){
				if (i<10){cout <<"  "<< i;}
				else if (i<=50){cout<<" "<<i;}
			}
			cout <<endl<<  "       ";
			for (int k=0;k<rows;k++){
				cout <<"___";
			}cout<<endl;

			for (int x=0; x<cols; x++){
				if(x<10){cout << "    " << x << " | ";}
				else if (x>=10){cout <<"   " << x << " | ";}
				for( int y=0; y<cols; y++){
					cout <<" "<< board[x][y] << " ";
				}	
				cout << endl;
			}

		}
		int get_square(){
			cout << "Enter a plot to check." << endl;
			cin >> x_plot >> y_plot;
			return x_plot, y_plot;
		}
		void check_plots(){
			
		}
		void get_stats(){
		b_rows = rows;
		b_cols = cols;
		board_mines = bombs;
		}
		minesweeper(){
			get_stats();
			make();
			print_board();
		}
		play_move(){
			get_square();
		}
		void populate(){
			for (int i=0; i<=bombs;i++){
			int x= rand() % rows + 1;
			int y= rand() % cols+1;
			board[x][y] = 2;
		}
	}
};

int main (){
	cout<< "What size would you like your game board to be?" << endl;
	cout<< "Enter a number for rows and columns, separated with a space." << endl;
	cin>> rows >> cols;
	cout<< "How many mines should there be?" << endl;
	cin>> bombs;
	
	minesweeper ();
	minesweeper populate();
		minesweeper ();
return 0;
}