namespace P0002R1 {

template <typename T>
void example(T& t) {
	++t;
}

}

int main() {
	// Compiles & Works
	int x = 5;
	P0002R1::example(x);

	// Compiles & Works
	long y = 6L;
	P0002R1::example(y);

	// Won't compile (C2428 in VS)
	bool z = false;
	P0002R1::example(z);
}