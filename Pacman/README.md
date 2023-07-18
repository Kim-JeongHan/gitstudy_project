# Markov Decision Process (MDP)
This chapter presents theory, applications, and computational methods for Markov Decision Processes (MDP's). MDP's are a class of stochastic sequential decision processes in which the cost and transition functions depend only on the current state of the system and the current action. These models have been applied in a wide range of subject areas, most notably in queueing and inventory control. A sequential decision process is a model for dynamic system under the control of a decision maker. Sequential decision processes are classified according to the times (epochs) at which decisions are made, the length of the decision making horizon, the mathematical properties of the state and action spaces, and the optimality criteria. The focus of this chapter is problems in which decisions are made periodically at discrete time points. The state and action sets are either finite, countable, compact or Borel; their characteristics determine the form of the reward and transition probability functions. The optimality criteria considered in the chapter include finite and infinite horizon expected total reward, infinite horizon expected total discounted reward, and average expected reward. 

The main objectives in analyzing sequential decision processes in general and MDP's in particular include:  
(1) providing an optimality equation that characterizes the supremal value of the objective function,  
(2) characterizing the form of an optimal policy if it exists,  
(3) developing efficient computational procedures for finding policies thatare optimal or close to optimal. The optimality or Bellman equation is the basic entity in MDP theory and almost all existence, characterization, and computational results are based on its analysis.

이 장에서는 마르코프 의사결정 프로세스(MDP)에 대한 이론, 응용, 계산 방법을 소개합니다. MDP는 비용과 전환 함수가 시스템의 현재 상태와 현재 행동에만 의존하는 확률적 순차적 의사 결정 프로세스의 한 종류입니다. 이 모델은 다양한 분야에 적용되어 왔으며, 특히 대기열 및 재고 관리 분야에서 가장 많이 사용되고 있습니다. 순차적 의사 결정 프로세스는 의사 결정자의 통제하에 있는 동적 시스템을 위한 모델입니다. 순차적 의사 결정 프로세스는 의사 결정이 이루어지는 시점(에포크), 의사 결정 기간의 길이, 상태 및 행동 공간의 수학적 특성, 최적성 기준에 따라 분류됩니다. 이 장에서는 의사 결정이 불연속적인 시점에 주기적으로 이루어지는 문제를 중점적으로 다룹니다. 상태 및 행동 집합은 유한, 셀 수 있는, 콤팩트 또는 보렐이며, 그 특성에 따라 보상 및 전이 확률 함수의 형태가 결정됩니다. 이 장에서 고려하는 최적성 기준에는 유한 및 무한 지평선 기대 총 보상, 무한 지평선 기대 총 할인 보상, 평균 기대 보상이 포함됩니다. 일반적으로 순차적 의사결정 과정과 특히 MDP를 분석하는 주요 목표는  
(1) 목적함수의 극대값을 특징짓는 최적성 방정식 제공  
(2) 최적 정책이 존재하는 경우 그 형태를 특징짓기  
(3) 효율적인 계산법  
최적성 또는 벨만 방정식은 MDP 이론의 기본 실체이며 거의 모든 존재, 특성화 및 계산 결과는 이 방정식의 분석에 기반합니다.

# MDP - Pacman
To get started, run Gridworld in manual control mode, which uses the arrow keys:
```python
python gridworld.py -m
```
You will see the two-exit layout from class. The blue dot is the agent. Note that when you press up, the agent only actually moves north 80% of the time. Such is the life of a Gridworld agent!

You can control many aspects of the simulation. A full list of options is available by running:
```
python gridworld.py -h
```

The default agent moves randomly
```
python gridworld.py -g MazeGrid
```
You should see the random agent bounce around the grid until it happens upon an exit. Not the finest hour for an AI agent.

Note: The Gridworld MDP is such that you first must enter a pre-terminal state (the double boxes shown in the GUI) and then take the special ‘exit’ action before the episode actually ends (in the true terminal state called TERMINAL_STATE, which is not shown in the GUI). If you run an episode manually, your total return may be less than you expected, due to the discount rate (-d to change; 0.9 by default).

Look at the console output that accompanies the graphical output (or use -t for all text). You will be told about each transition the agent experiences (to turn this off, use -q).

As in Pacman, positions are represented by (x,y) Cartesian coordinates and any arrays are indexed by [x][y], with 'north' being the direction of increasing y, etc. By default, most transitions will receive a reward of zero, though you can change this with the living reward option (-r).

# Bonus 
https://spinningup.openai.com/en/latest/

# Citing
```
@article{puterman1990markov,
  title={Markov decision processes},
  author={Puterman, Martin L},
  journal={Handbooks in operations research and management science},
  volume={2},
  pages={331--434},
  year={1990},
  publisher={Elsevier}
}

@reference{
    title={CS 188 UC Berkeley},
    code={https://inst.eecs.berkeley.edu/~cs188/sp21/project6/}
    }
```

# Authors
Chanyeok Choi 