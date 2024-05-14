PY=python
GENAST=gen_ast.py

RAW_SRC=$(wildcard *.txt)
AST_SRC=$(patsubst %.txt, %.toml, $(RAW_SRC))

all: $(AST_SRC)

%.toml: %.txt
	$(PY) $(GENAST) $< $@

