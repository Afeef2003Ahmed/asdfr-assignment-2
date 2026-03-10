from setuptools import find_packages
from setuptools import setup

setup(
    name='timing_nodes',
    version='0.0.0',
    packages=find_packages(
        include=('timing_nodes', 'timing_nodes.*')),
)
