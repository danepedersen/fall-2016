
/*
*          Pass by Ref vs Ptr.
*/
void main () {
	int a = 5;
	int *b = 6;

	fooRef(a);
	fooRef(*b);

	fooPtr(&a);
	fooPtr(b);
}

// pass by ref
void fooRef(int &c) {
	
}

// pass by ptr
void fooPtr(int *d) {
	
}

/*
*          Overloading
*/
void bar() {
	bar(0, 0);
}

void bar(int a) {
	bar(a, 0);
}

void bar(int a, int b) {
	
}

/*
*          Short Circuiting
*/
void short-circuit(int a, int b) {
	//regular statement
	if (a > b) {
		return a
	} else {
		return b
	}

	//slightly shortened
	if (a > b) return a
	else return b

	//short circuited, [] are imaginary
	return [(a > b) ? a : b]
}