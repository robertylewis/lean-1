set_option new_elaborator true

section
  parameter (A : Type)

  definition f : A → A :=
  λ x, x

  check f
end

check f
