import unittest
from pycodata.version import __version__


class TestVersion(unittest.TestCase):
    r"""Test version."""
    def test_version(self):
        value = __version__
        expected = "0.9.0"
        self.assertEqual(value, expected)

