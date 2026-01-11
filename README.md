# LR_RW

This Monte Carlo simulation program provides a numerical implementation of **Lévy Flights**, also known as **long-range random walks (LR-RW)**.

## Introduction

A **Lévy flight** is a type of random walk where the step lengths follow a heavy-tailed probability distribution. Unlike ordinary (short-range) random walks, in which steps are typically of similar magnitude, Lévy flights occasionally include extremely long jumps, allowing the walker to explore space in a nonlocal manner.  

Mathematically, the step-length distribution of a Lévy flight in $d$ dimensions is given by

$$
P(r) \sim \frac{1}{r^{d + \sigma}},
$$

where $r$ is the step length and $\sigma > 0$ is the Lévy exponent that controls the heaviness of the tail. Smaller $\sigma$ corresponds to a higher probability of long jumps, and when $\sigma \to 2$, the process approaches the standard Gaussian random walk.  

Lévy flights play an important role in various physical and biological systems, such as anomalous diffusion, turbulent transport, and search processes.

---

## How to use

1. **Clone the repository:**
    ```bash
    git clone https://github.com/Tensofermi/LR_RW
    cd LR_RW
    ```

2. **Configure model selection** in the `Makefile`:
    ```bash
    SRC_DIR := src_chi_k
    # SRC_DIR := src_demo
    # SRC_DIR := src_n_site
    ```
    Uncomment the desired model and comment out the others.

3. **Set parameters** in `input.txt` and run the simulation:
    ```bash
    ./run.sh
    ```

4. **For advanced simulations**, including job submissions on HPC systems, refer to the `/lsub`, `/qsub`, and `/data` directories in our related project: [Zoo_of_Classical_ON_Spin_Model](https://github.com/Tensofermi/Zoo_of_Classical_ON_Spin_Model)


