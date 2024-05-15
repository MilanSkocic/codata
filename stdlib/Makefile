PY=python
GENCODE=../scripts/gen_stdlib2.py

SRC_DIR=../src

IN=$(SRC_DIR)/codata_constants_2022.f90
OUT= stdlib_codata.f90

.PHONY: clean copy

all: $(OUT)

$(OUT): $(IN)
	$(PY) $(GENCODE) $< $@

copy:
	cp $(F_MODULE) ../../stdlib/src/

clean:	
	rm -f $(F_MODULE)
