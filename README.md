# Verilator CI Simulation Workflow

This repository provides an automated workflow to compile, simulate, and extract waveforms from Verilog/SystemVerilog projects using **Verilator** and **GitHub Actions**.

## Features
- Compile all Verilog/SystemVerilog files listed in `filelist.f`.
- Simulate each top-level module automatically.
- Generate `.fst` waveform files.
- Upload simulation artifacts to GitHub Actions for easy download.

## Repository Structure
filelist.txt # List of Verilog/SystemVerilog files to compile and simulate

> Only `filelist.txt` is required to run the workflow.

## Usage
1. Ensure your top-level testbench module is named `tb`.
2. The workflow will generate waveform files named `dump.fst`.
3. Download the waveform artifacts directly from the GitHub Actions run page.
