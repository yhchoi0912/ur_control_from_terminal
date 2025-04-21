from setuptools import find_packages
from setuptools import setup

setup(
    name='move_relative_ur',
    version='0.0.1',
    packages=find_packages(
        include=('move_relative_ur', 'move_relative_ur.*')),
)
