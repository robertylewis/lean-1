/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
*/
// Automatically generated file, DO NOT EDIT
#include "kernel/environment.h"
#include "kernel/decl_macros.h"
namespace lean {
MK_CONSTANT(TypeU, name("TypeU"));
MK_CONSTANT(Bool, name("Bool"));
MK_CONSTANT(heq_fn, name("heq"));
MK_CONSTANT(hrefl_fn, name("hrefl"));
MK_CONSTANT(eq_fn, name("eq"));
MK_CONSTANT(refl_fn, name("refl"));
MK_CONSTANT(heq_eq_fn, name("heq_eq"));
MK_CONSTANT(true, name("true"));
MK_CONSTANT(trivial, name("trivial"));
MK_CONSTANT(false, name("false"));
MK_CONSTANT(not_fn, name("not"));
MK_CONSTANT(or_fn, name("or"));
MK_CONSTANT(and_fn, name("and"));
MK_CONSTANT(implies_fn, name("implies"));
MK_CONSTANT(neq_fn, name("neq"));
MK_CONSTANT(a_neq_a_elim_fn, name("a_neq_a_elim"));
MK_CONSTANT(iff_fn, name("iff"));
MK_CONSTANT(em_fn, name("em"));
MK_CONSTANT(not_intro_fn, name("not_intro"));
MK_CONSTANT(absurd_fn, name("absurd"));
MK_CONSTANT(exists_fn, name("exists"));
MK_CONSTANT(exists_unique_fn, name("exists_unique"));
MK_CONSTANT(case_fn, name("case"));
MK_CONSTANT(false_elim_fn, name("false_elim"));
MK_CONSTANT(mt_fn, name("mt"));
MK_CONSTANT(contrapos_fn, name("contrapos"));
MK_CONSTANT(absurd_elim_fn, name("absurd_elim"));
MK_CONSTANT(or_introl_fn, name("or_introl"));
MK_CONSTANT(or_intror_fn, name("or_intror"));
MK_CONSTANT(boolcomplete_fn, name("boolcomplete"));
MK_CONSTANT(boolcomplete_swapped_fn, name("boolcomplete_swapped"));
MK_CONSTANT(resolve1_fn, name("resolve1"));
MK_CONSTANT(subst_fn, name("subst"));
MK_CONSTANT(substp_fn, name("substp"));
MK_CONSTANT(symm_fn, name("symm"));
MK_CONSTANT(trans_fn, name("trans"));
MK_CONSTANT(congr1_fn, name("congr1"));
MK_CONSTANT(congr2_fn, name("congr2"));
MK_CONSTANT(congr_fn, name("congr"));
MK_CONSTANT(true_ne_false, name("true_ne_false"));
MK_CONSTANT(absurd_not_true_fn, name("absurd_not_true"));
MK_CONSTANT(not_false_trivial, name("not_false_trivial"));
MK_CONSTANT(eqmp_fn, name("eqmp"));
MK_CONSTANT(eqmpr_fn, name("eqmpr"));
MK_CONSTANT(imp_trans_fn, name("imp_trans"));
MK_CONSTANT(imp_eq_trans_fn, name("imp_eq_trans"));
MK_CONSTANT(eq_imp_trans_fn, name("eq_imp_trans"));
MK_CONSTANT(to_eq_fn, name("to_eq"));
MK_CONSTANT(to_heq_fn, name("to_heq"));
MK_CONSTANT(iff_eliml_fn, name("iff_eliml"));
MK_CONSTANT(iff_elimr_fn, name("iff_elimr"));
MK_CONSTANT(ne_symm_fn, name("ne_symm"));
MK_CONSTANT(eq_ne_trans_fn, name("eq_ne_trans"));
MK_CONSTANT(ne_eq_trans_fn, name("ne_eq_trans"));
MK_CONSTANT(eqt_elim_fn, name("eqt_elim"));
MK_CONSTANT(eqf_elim_fn, name("eqf_elim"));
MK_CONSTANT(heqt_elim_fn, name("heqt_elim"));
MK_CONSTANT(not_true, name("not_true"));
MK_CONSTANT(not_false, name("not_false"));
MK_CONSTANT(not_not_eq_fn, name("not_not_eq"));
MK_CONSTANT(not_neq_fn, name("not_neq"));
MK_CONSTANT(not_neq_elim_fn, name("not_neq_elim"));
MK_CONSTANT(not_not_elim_fn, name("not_not_elim"));
MK_CONSTANT(not_imp_eliml_fn, name("not_imp_eliml"));
MK_CONSTANT(not_imp_elimr_fn, name("not_imp_elimr"));
MK_CONSTANT(and_intro_fn, name("and_intro"));
MK_CONSTANT(and_eliml_fn, name("and_eliml"));
MK_CONSTANT(and_elimr_fn, name("and_elimr"));
MK_CONSTANT(or_elim_fn, name("or_elim"));
MK_CONSTANT(refute_fn, name("refute"));
MK_CONSTANT(boolext_fn, name("boolext"));
MK_CONSTANT(iff_intro_fn, name("iff_intro"));
MK_CONSTANT(eqt_intro_fn, name("eqt_intro"));
MK_CONSTANT(eqf_intro_fn, name("eqf_intro"));
MK_CONSTANT(a_neq_a_fn, name("a_neq_a"));
MK_CONSTANT(eq_id_fn, name("eq_id"));
MK_CONSTANT(iff_id_fn, name("iff_id"));
MK_CONSTANT(neq_elim_fn, name("neq_elim"));
MK_CONSTANT(neq_to_not_eq_fn, name("neq_to_not_eq"));
MK_CONSTANT(left_comm_fn, name("left_comm"));
MK_CONSTANT(or_comm_fn, name("or_comm"));
MK_CONSTANT(or_assoc_fn, name("or_assoc"));
MK_CONSTANT(or_id_fn, name("or_id"));
MK_CONSTANT(or_falsel_fn, name("or_falsel"));
MK_CONSTANT(or_falser_fn, name("or_falser"));
MK_CONSTANT(or_truel_fn, name("or_truel"));
MK_CONSTANT(or_truer_fn, name("or_truer"));
MK_CONSTANT(or_tauto_fn, name("or_tauto"));
MK_CONSTANT(or_left_comm_fn, name("or_left_comm"));
MK_CONSTANT(resolve2_fn, name("resolve2"));
MK_CONSTANT(and_comm_fn, name("and_comm"));
MK_CONSTANT(and_id_fn, name("and_id"));
MK_CONSTANT(and_assoc_fn, name("and_assoc"));
MK_CONSTANT(and_truer_fn, name("and_truer"));
MK_CONSTANT(and_truel_fn, name("and_truel"));
MK_CONSTANT(and_falsel_fn, name("and_falsel"));
MK_CONSTANT(and_falser_fn, name("and_falser"));
MK_CONSTANT(and_absurd_fn, name("and_absurd"));
MK_CONSTANT(and_left_comm_fn, name("and_left_comm"));
MK_CONSTANT(imp_truer_fn, name("imp_truer"));
MK_CONSTANT(imp_truel_fn, name("imp_truel"));
MK_CONSTANT(imp_falser_fn, name("imp_falser"));
MK_CONSTANT(imp_falsel_fn, name("imp_falsel"));
MK_CONSTANT(imp_id_fn, name("imp_id"));
MK_CONSTANT(imp_or_fn, name("imp_or"));
MK_CONSTANT(not_congr_fn, name("not_congr"));
MK_CONSTANT(exists_elim_fn, name("exists_elim"));
MK_CONSTANT(exists_intro_fn, name("exists_intro"));
MK_CONSTANT(not_exists_fn, name("not_exists"));
MK_CONSTANT(not_exists_elim_fn, name("not_exists_elim"));
MK_CONSTANT(exists_unfold1_fn, name("exists_unfold1"));
MK_CONSTANT(exists_unfold2_fn, name("exists_unfold2"));
MK_CONSTANT(exists_unfold_fn, name("exists_unfold"));
MK_CONSTANT(inhabited_fn, name("inhabited"));
MK_CONSTANT(inhabited_intro_fn, name("inhabited_intro"));
MK_CONSTANT(inhabited_elim_fn, name("inhabited_elim"));
MK_CONSTANT(inhabited_ex_intro_fn, name("inhabited_ex_intro"));
MK_CONSTANT(inhabited_range_fn, name("inhabited_range"));
MK_CONSTANT(exists_rem_fn, name("exists_rem"));
MK_CONSTANT(forall_rem_fn, name("forall_rem"));
MK_CONSTANT(imp_congrr_fn, name("imp_congrr"));
MK_CONSTANT(imp_congrl_fn, name("imp_congrl"));
MK_CONSTANT(imp_congr_fn, name("imp_congr"));
MK_CONSTANT(or_congrr_fn, name("or_congrr"));
MK_CONSTANT(or_congrl_fn, name("or_congrl"));
MK_CONSTANT(or_congr_fn, name("or_congr"));
MK_CONSTANT(and_congrr_fn, name("and_congrr"));
MK_CONSTANT(and_congrl_fn, name("and_congrl"));
MK_CONSTANT(and_congr_fn, name("and_congr"));
MK_CONSTANT(not_and_fn, name("not_and"));
MK_CONSTANT(not_and_elim_fn, name("not_and_elim"));
MK_CONSTANT(not_or_fn, name("not_or"));
MK_CONSTANT(not_or_elim_fn, name("not_or_elim"));
MK_CONSTANT(not_implies_fn, name("not_implies"));
MK_CONSTANT(not_implies_elim_fn, name("not_implies_elim"));
MK_CONSTANT(a_eq_not_a_fn, name("a_eq_not_a"));
MK_CONSTANT(a_iff_not_a_fn, name("a_iff_not_a"));
MK_CONSTANT(true_eq_false, name("true_eq_false"));
MK_CONSTANT(true_iff_false, name("true_iff_false"));
MK_CONSTANT(false_eq_true, name("false_eq_true"));
MK_CONSTANT(false_iff_true, name("false_iff_true"));
MK_CONSTANT(a_iff_true_fn, name("a_iff_true"));
MK_CONSTANT(a_iff_false_fn, name("a_iff_false"));
MK_CONSTANT(not_iff_fn, name("not_iff"));
MK_CONSTANT(not_iff_elim_fn, name("not_iff_elim"));
MK_CONSTANT(forall_or_distributer_fn, name("forall_or_distributer"));
MK_CONSTANT(forall_or_distributel_fn, name("forall_or_distributel"));
MK_CONSTANT(forall_and_distribute_fn, name("forall_and_distribute"));
MK_CONSTANT(exists_and_distributer_fn, name("exists_and_distributer"));
MK_CONSTANT(exists_or_distribute_fn, name("exists_or_distribute"));
MK_CONSTANT(eq_exists_intro_fn, name("eq_exists_intro"));
MK_CONSTANT(not_forall_fn, name("not_forall"));
MK_CONSTANT(not_forall_elim_fn, name("not_forall_elim"));
MK_CONSTANT(exists_and_distributel_fn, name("exists_and_distributel"));
MK_CONSTANT(exists_imp_distribute_fn, name("exists_imp_distribute"));
MK_CONSTANT(forall_uninhabited_fn, name("forall_uninhabited"));
MK_CONSTANT(allext_fn, name("allext"));
MK_CONSTANT(funext_fn, name("funext"));
MK_CONSTANT(eta_fn, name("eta"));
MK_CONSTANT(eps_fn, name("eps"));
MK_CONSTANT(eps_ax_fn, name("eps_ax"));
MK_CONSTANT(eps_th_fn, name("eps_th"));
MK_CONSTANT(eps_singleton_fn, name("eps_singleton"));
MK_CONSTANT(inhabited_fun_fn, name("inhabited_fun"));
MK_CONSTANT(exists_to_eps_fn, name("exists_to_eps"));
MK_CONSTANT(axiom_of_choice_fn, name("axiom_of_choice"));
MK_CONSTANT(skolem_th_fn, name("skolem_th"));
MK_CONSTANT(ite_fn, name("ite"));
MK_CONSTANT(if_true_fn, name("if_true"));
MK_CONSTANT(if_false_fn, name("if_false"));
MK_CONSTANT(if_a_a_fn, name("if_a_a"));
MK_CONSTANT(if_congr_fn, name("if_congr"));
MK_CONSTANT(if_imp_then_fn, name("if_imp_then"));
MK_CONSTANT(if_imp_else_fn, name("if_imp_else"));
MK_CONSTANT(app_if_distribute_fn, name("app_if_distribute"));
MK_CONSTANT(eq_if_distributer_fn, name("eq_if_distributer"));
MK_CONSTANT(eq_if_distributel_fn, name("eq_if_distributel"));
MK_CONSTANT(injective_fn, name("injective"));
MK_CONSTANT(non_surjective_fn, name("non_surjective"));
MK_CONSTANT(ind, name("ind"));
MK_CONSTANT(infinity, name("infinity"));
MK_CONSTANT(pairext_fn, name("pairext"));
MK_CONSTANT(TypeM, name("TypeM"));
MK_CONSTANT(cast_fn, name("cast"));
MK_CONSTANT(cast_heq_fn, name("cast_heq"));
MK_CONSTANT(hsymm_fn, name("hsymm"));
MK_CONSTANT(htrans_fn, name("htrans"));
MK_CONSTANT(hcongr_fn, name("hcongr"));
MK_CONSTANT(hfunext_fn, name("hfunext"));
MK_CONSTANT(hallext_fn, name("hallext"));
MK_CONSTANT(hsfunext_fn, name("hsfunext"));
MK_CONSTANT(cast_eq_fn, name("cast_eq"));
MK_CONSTANT(cast_trans_fn, name("cast_trans"));
MK_CONSTANT(cast_pull_fn, name("cast_pull"));
MK_CONSTANT(proof_irrel_fn, name("proof_irrel"));
MK_CONSTANT(hproof_irrel_fn, name("hproof_irrel"));
}
