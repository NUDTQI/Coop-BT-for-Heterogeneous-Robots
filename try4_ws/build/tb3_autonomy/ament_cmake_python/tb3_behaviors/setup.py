import os
from setuptools import find_packages
from setuptools import setup

setup(
    name='tb3_behaviors',
    version='0.0.0',
    packages=find_packages(
        include=('tb3_behaviors', 'tb3_behaviors.*')),
)
