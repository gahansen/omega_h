Reals swap2d_qualities(Mesh* mesh, LOs cands2edges);

void filter_swap2d_improve(Mesh* mesh,
    LOs* cands2edges, Reals* cand_quals);

void swap2d_topology(Mesh* mesh, LOs keys2edges,
    std::array<LOs, 3>* keys2prods,
    std::array<LOs, 3>* prod_verts2verts);

bool swap_part1(Mesh* mesh, Real qual_ceil, Int nlayers);

bool swap2d(Mesh* mesh, Real qual_ceil, Int nlayers);
