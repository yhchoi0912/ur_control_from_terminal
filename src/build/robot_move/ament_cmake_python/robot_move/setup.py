from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_move',
    version='0.0.0',
    packages=find_packages(
        include=('robot_move', 'robot_move.*')),
)
