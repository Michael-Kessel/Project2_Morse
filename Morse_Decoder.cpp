#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct Node
{
	char val = NULL;
	struct Node * dot_Node = NULL;
	struct Node * dash_Node = NULL;
};

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

void Decode(string file_Name, Node * Head)
{
	ifstream file;
	Node * current_Node = Head;
	char c;
	int space_count = 0;
	file.open(file_Name);
	if (file)
	{
		file.get(c);
		while (c)
		{
			if (c == ' ' || c == '\n')
			{
				space_count++;
				if (current_Node->val != '#')
				{
					cout << current_Node->val;
				}
				else if (space_count == 3)
				{
					cout << " ";
				}
				current_Node = Head;
				file.get(c);
			}
			else if (c == '.' || c == '-')
			{
				space_count = 0;
				current_Node = Search(c, current_Node);
				file.get(c);
			}
			else
			{
				file.get(c);
			}
		}
	}
	else
	{
		cout << "Not a valid file to read from" << endl;
	}
	return;
}

int main() {
	string file = "M2ETest2.txt";
	Node * Head = new Node;
	Head->val = '#';
	createTree(Head);
	Decode(file, Head);
	system("pause");
	return 0;
}