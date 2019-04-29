/*Coghan Spery
Micheal Kessel
Bando Arsene
Andrew Fuller
Victor Hernandez
*/
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

//This creates the individual nodes for the binary tree that I am creating. 
//Each node will have a character value and two children 
//(dash and dot nodes which can have values or be NULL).
struct Node
{
	char val = NULL;
	struct Node * dot_Node = NULL;
	struct Node * dash_Node = NULL;
};

//This is a function I created that allowed me to easily create the required binary tree.
//It searches for a node with a specific value within the given tree.
//head is the node at the head of the tree you are searching, and letter is the char value you are looking for.
Node * build_Search(Node * head, char letter)
{
	Node * dot_Result;
	Node * dash_Result;

	if (head == NULL)
	{
		return NULL;
	}
	else if (head->val == letter)
	{
		return head;
	}
	else
	{
		dot_Result = build_Search(head->dot_Node, letter);
		dash_Result = build_Search(head->dash_Node, letter);
		if (dot_Result == NULL && dash_Result == NULL)
		{
			return NULL;
		}
		else if (dot_Result != NULL)
		{
			return dot_Result;
		}
		else
		{
			return dash_Result;
		}
	}
}

//These are functions that add a child node to the given Parent node.
//If there is already a node in that place, they will output to the console
void add_Dot(Node * Parent, Node * dot)
{
	if (Parent->dot_Node == NULL)
	{
		Parent->dot_Node = dot;
	}
	else
	{
		cout << "Unable to insert" << endl;
	}
	return;
}
void add_Dash(Node * Parent, Node * dash)
{
	if (Parent->dash_Node == NULL)
	{
		Parent->dash_Node = dash;
	}
	else
	{
		cout << "Unable to insert" << endl;
	}
	return;
}

//This is the function I use in order to create the Morse tree.
//In the tree, if I needed to create an empty node for a future child I filled it with a #.
//This was in order for the build_Search function to be able to itterate through these.
void createTree(Node * Head)
{
	Node * tmp = new Node;
	tmp->val = 'E';
	add_Dot(Head, tmp);

	tmp = new Node;
	tmp->val = 'T';
	add_Dash(Head, tmp);

	tmp = new Node;
	tmp->val = 'I';
	add_Dot(build_Search(Head, 'E'), tmp);

	tmp = new Node;
	tmp->val = 'A';
	add_Dash(build_Search(Head, 'E'), tmp);

	tmp = new Node;
	tmp->val = 'N';
	add_Dot(build_Search(Head, 'T'), tmp);

	tmp = new Node;
	tmp->val = 'M';
	add_Dash(build_Search(Head, 'T'), tmp);

	tmp = new Node;
	tmp->val = 'S';
	add_Dot(build_Search(Head, 'I'), tmp);

	tmp = new Node;
	tmp->val = 'U';
	add_Dash(build_Search(Head, 'I'), tmp);

	tmp = new Node;
	tmp->val = 'R';
	add_Dot(build_Search(Head, 'A'), tmp);

	tmp = new Node;
	tmp->val = 'W';
	add_Dash(build_Search(Head, 'A'), tmp);

	tmp = new Node;
	tmp->val = 'D';
	add_Dot(build_Search(Head, 'N'), tmp);

	tmp = new Node;
	tmp->val = 'K';
	add_Dash(build_Search(Head, 'N'), tmp);

	tmp = new Node;
	tmp->val = 'G';
	add_Dot(build_Search(Head, 'M'), tmp);

	tmp = new Node;
	tmp->val = 'O';
	add_Dash(build_Search(Head, 'M'), tmp);

	tmp = new Node;
	tmp->val = 'H';
	add_Dot(build_Search(Head, 'S'), tmp);

	tmp = new Node;
	tmp->val = 'V';
	add_Dash(build_Search(Head, 'S'), tmp);

	tmp = new Node;
	tmp->val = 'F';
	add_Dot(build_Search(Head, 'U'), tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dash(build_Search(Head, 'U'), tmp);

	tmp = new Node;
	tmp->val = 'L';
	add_Dot(build_Search(Head, 'R'), tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dash(build_Search(Head, 'R'), tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dot(build_Search(Head, 'R')->dash_Node, tmp);

	tmp = new Node;
	tmp->val = '.';
	add_Dash(build_Search(Head, 'R')->dash_Node->dot_Node, tmp);

	tmp = new Node;
	tmp->val = 'P';
	add_Dot(build_Search(Head, 'W'), tmp);

	tmp = new Node;
	tmp->val = 'J';
	add_Dash(build_Search(Head, 'W'), tmp);

	tmp = new Node;
	tmp->val = 'B';
	add_Dot(build_Search(Head, 'D'), tmp);

	tmp = new Node;
	tmp->val = 'X';
	add_Dash(build_Search(Head, 'D'), tmp);

	tmp = new Node;
	tmp->val = 'C';
	add_Dot(build_Search(Head, 'K'), tmp);

	tmp = new Node;
	tmp->val = 'Y';
	add_Dash(build_Search(Head, 'K'), tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dash(build_Search(Head, 'C'), tmp);

	tmp = new Node;
	tmp->val = ';';
	add_Dot(build_Search(Head, 'C')->dash_Node, tmp);

	tmp = new Node;
	tmp->val = 'Z';
	add_Dot(build_Search(Head, 'G'), tmp);

	tmp = new Node;
	tmp->val = 'Q';
	add_Dash(build_Search(Head, 'G'), tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dot(build_Search(Head, 'O'), tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dash(build_Search(Head, 'O'), tmp);

	tmp = new Node;
	tmp->val = '5';
	add_Dot(build_Search(Head, 'H'), tmp);

	tmp = new Node;
	tmp->val = '4';
	add_Dash(build_Search(Head, 'H'), tmp);

	tmp = new Node;
	tmp->val = '3';
	add_Dash(build_Search(Head, 'V'), tmp);

	tmp = new Node;
	tmp->val = '2';
	add_Dash(build_Search(Head, 'U')->dash_Node, tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dot(build_Search(Head, 'U')->dash_Node, tmp);

	tmp = new Node;
	tmp->val = '?';
	add_Dot(build_Search(Head, 'U')->dot_Node, tmp);

	tmp = new Node;
	tmp->val = '1';
	add_Dash(build_Search(Head, 'J'), tmp);

	tmp = new Node;
	tmp->val = '\'';
	add_Dot(build_Search(Head, '1'), tmp);

	tmp = new Node;
	tmp->val = '6';
	add_Dot(build_Search(Head, 'B'), tmp);

	tmp = new Node;
	tmp->val = '-';
	add_Dash(build_Search(Head, '6'), tmp);

	tmp = new Node;
	tmp->val = '7';
	add_Dot(build_Search(Head, 'Z'), tmp);

	tmp = new Node;
	tmp->val = '#';
	add_Dash(build_Search(Head, 'Z'), tmp);

	tmp = new Node;
	tmp->val = ',';
	add_Dash(build_Search(Head, 'Z')->dash_Node, tmp);

	tmp = new Node;
	tmp->val = '8';
	add_Dot(build_Search(Head, 'O')->dot_Node, tmp);

	tmp = new Node;
	tmp->val = ':';
	add_Dot(build_Search(Head, '8'), tmp);

	tmp = new Node;
	tmp->val = '9';
	add_Dot(build_Search(Head, 'O')->dash_Node, tmp);

	tmp = new Node;
	tmp->val = '0';
	add_Dash(build_Search(Head, 'O')->dash_Node, tmp);
}

//This is the function I created in order to iterate through the tree.
//It takes the dot or dash value, and returns a refrence to the respective child node
Node * Search(char Morse, Node * Head)
{
	if (Morse == '.')
	{
		return Head->dot_Node;
	}
	if (Morse == '-')
	{
		return Head->dash_Node;
	}
	return Head;
}


//This is the Decode functon that does the most work.
//Look at the comments throughout the function
void Decode(string file_Name, Node * Head)
{
	ifstream file;
	Node * current_Node = Head; //Creates a refrence to the current node so that the fuction can iterate through the tree
	char c;
	int space_count = 0; //Tracks the space count, in order to know if there is a new letter or word
	file.open(file_Name); //Opens file
	if (file) //If the file opens sucessfully, proceed with the decoding
	{
		file.get(c); //Takes the first character from the given file
		while (c)
		{
			if (c == ' ' || c == '\n') //Case 1
			{
				space_count++; //Increment space count
				if (current_Node->val != '#')
				{
					cout << current_Node->val; //As long as ve have a valid pointer node (not #), print it
				}
				else if (space_count == 3)
				{
					cout << " "; //If space count = 3, make a new word
				}
				current_Node = Head; //Reset the Head node
				file.get(c); //Get next letter
			}
			else if (c == '.' || c == '-') //Case 2
			{
				space_count = 0; //Reset space count
				current_Node = Search(c, current_Node); //Find refrence to next node
				file.get(c); //Get next letter
			}
			else //Case 3, invalid character in file. Ignore it
			{
				file.get(c); //Get next letter
			}
		}
	}
	else //Not a valid file name
	{
		cout << "Not a valid file to read from" << endl;
	}
	return;
}

void encode(char x) {

	switch (x) {
	case ' ': cout << "   "; break;

	case 'a': cout << ".- "; break;
	case 'A': cout << ".- "; break;

	case 'b': cout << "-... "; break;
	case 'B': cout << "-... "; break;

	case 'c': cout << "-.-. "; break;
	case 'C': cout << "-.-. "; break;

	case 'd': cout << "-.. "; break;
	case 'D': cout << "-.. "; break;

	case 'e': cout << ". "; break;
	case 'E': cout << ". "; break;

	case 'f': cout << "..-. "; break;
	case 'F': cout << "..-. "; break;

	case 'g': cout << "--. "; break;
	case 'G': cout << "--. "; break;

	case 'h': cout << ".... "; break;
	case 'H': cout << ".... "; break;

	case 'i': cout << ".. "; break;
	case 'I': cout << ".. "; break;

	case 'j': cout << ".--- "; break;
	case 'J': cout << ".--- "; break;

	case 'k': cout << "-.- "; break;
	case 'K': cout << "-.- "; break;

	case 'l': cout << ".-.. "; break;
	case 'L': cout << ".-.. "; break;

	case 'm': cout << "-- "; break;
	case 'M': cout << "-- "; break;

	case 'n': cout << "-. "; break;
	case 'N': cout << "-. "; break;

	case 'o': cout << "--- "; break;
	case 'O': cout << "--- "; break;

	case 'p': cout << ".--. "; break;
	case 'P': cout << ".--. "; break;

	case 'q': cout << "--.- "; break;
	case 'Q': cout << "--.- "; break;

	case 'r': cout << ".-. "; break;
	case 'R': cout << ".-. "; break;

	case 's': cout << "... "; break;
	case 'S': cout << "... "; break;

	case 't': cout << "- "; break;
	case 'T': cout << "- "; break;

	case 'u': cout << "..- "; break;
	case 'U': cout << "..- "; break;

	case 'v': cout << "...- "; break;
	case 'V': cout << "...- "; break;

	case 'w': cout << ".-- "; break;
	case 'W': cout << ".-- "; break;

	case 'x': cout << "-..- "; break;
	case 'X': cout << "-..- "; break;

	case 'y': cout << "-.-- "; break;
	case 'Y': cout << "-.-- "; break;

	case 'z': cout << "--.. "; break;
	case 'Z': cout << "--.. "; break;

	case '1': cout << ".---- "; break;
	case '2': cout << "..--- "; break;
	case '3': cout << "...-- "; break;
	case '4': cout << "....- "; break;
	case '5': cout << "..... "; break;
	case '6': cout << "-.... "; break;
	case '7': cout << "--... "; break;
	case '8': cout << "---.. "; break;
	case '9': cout << "----. "; break;
	case '0': cout << "----- "; break;

	default: cout << "%% ";
	}
}


int main() {
	ifstream file;
	string g, b;
	
	cout << "please enter the name of the file: " << endl;
	cin >> g;//Name of the file
	file.open(g);
	if (file) {  //checks if file is open
		while (file >> b) { // read file into string
			cout << b << endl;
		}
	}
	else
	{
		cout << "error opening file " << endl; // Error message
	}
	Node * Head = new Node; //Creates Head of tree node
	Head->val = '#'; //Sets Head's value
	createTree(Head); //Creates Morse tree off of Head
	Decode(g, Head); //Decodes file
	
	while (cin >> g)
	{
		for (int i = 0; i > g.length(); i++)
		{
			cout << "thing";
		}
	}
	//encode();
	file.close(); // Closes file
	system("pause");
	return 0;
}
