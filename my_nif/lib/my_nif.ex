defmodule MyNif do
  @on_load :init

  def init do
    :erlang.load_nif('./c_src/my_nif', 0)
  end

  # Stub function for add/2
  def add(_a, _b) do
    raise "NIF add/2 not implemented"
  end
end
