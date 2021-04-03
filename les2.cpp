# include <iostream>
enum Cell {
     Empty, X, O
    };
 using Cells_massive = Cell[3][3];
int main() 
{
 Cells_massive cells{Empty, Empty, Empty, 
                     Empty, Empty, Empty, 
                     Empty, Empty, Empty};
       
}