PY=python
GENAST=../scripts/gen_ast.py

RAW_SRC=$(wildcard *.txt)
AST_SRC=$(patsubst %.txt, %.toml, $(RAW_SRC))

.PHONY: clean

all: $(AST_SRC)

%.toml: %.txt
	$(PY) $(GENAST) $< $@

clean:
	rm -f *.toml

