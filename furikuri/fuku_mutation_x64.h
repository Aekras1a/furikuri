#pragma once

#pragma once

class fuku_mutation_x64 :
    public fuku_mutation {

    fuku_asm_x64 f_asm;
    fuku_ob_settings settings;

    void fuku_mutation_x64::fuku_junk_1b(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    void fuku_mutation_x64::fuku_junk_2b(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    void fuku_mutation_x64::fuku_junk_3b(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    void fuku_mutation_x64::fuku_junk_4b(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    void fuku_mutation_x64::fuku_junk_5b(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    void fuku_mutation_x64::fuku_junk_6b(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    void fuku_mutation_x64::fuku_junk_7b(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);

    void fuku_mutation_x64::generate_junk(linestorage& junk,
        fuku_instruction* next_line, uint32_t max_size, size_t junk_size, bool unstable_stack, uint16_t allow_flags_changes);


    void fuku_mutation_x64::fuku_junk(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);

    bool fuku_mutation_x64::fukutate_push(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_pop(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_add(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_sub(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_and(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_inc(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_dec(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_test(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_cmp(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_jcc(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_jmp(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    bool fuku_mutation_x64::fukutate_ret(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);

    void fuku_mutation_x64::fukutation(fuku_code_holder& code_holder, linestorage::iterator& lines_iter);
    void fuku_mutation_x64::obfuscate_lines(fuku_code_holder& code_holder, unsigned int recurse_idx);

public:
    fuku_mutation_x64::fuku_mutation_x64(const fuku_ob_settings& settings);
    fuku_mutation_x64::~fuku_mutation_x64();

    void fuku_mutation_x64::obfuscate(fuku_code_holder& code_holder);

    void fuku_mutation_x64::get_junk(std::vector<uint8_t>& junk, size_t junk_size, bool unstable_stack, uint16_t allow_flags_changes);
};
