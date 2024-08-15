FIRMWARELIST = 900 903 950 1000 1050 1100

all: $(FIRMWARELIST)

$(FIRMWARELIST):
	@echo "Building for firmware $@"
	@mkdir -p build/$@/stage1 build/$@/stage2
	@make -C stage1 FW=$@ clean && make -C stage1 FW=$@
	@mv stage1/stage1.bin build/$@/stage1/
	@make -C stage2 FW=$@ clean && make -C stage2 FW=$@
	@mv stage2/stage2.bin build/$@/stage2/

clean:
	@for fw in $(FIRMWARELIST); do \
		make -C stage1 FW=$$fw clean; \
		make -C stage2 FW=$$fw clean; \
	done
	@rm -rf build