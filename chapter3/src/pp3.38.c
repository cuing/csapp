void fix_set_diag(fix_matrix A, int val) {
	int i;
	for (i = 0; i < N; i++) {
		A[i][i] = val;
	}
}

void fix_set_diag_opt(fix_matrix A, int val) {
	int *Arow = fix_matrix[0][0];
	int i;
	for (i = 0; i < N; i++) {
        *Arow = val;
        Arow += N + 1
	}
}

