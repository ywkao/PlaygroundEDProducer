# PlaygroundEDProducer

Usage of the package

```
$ cd ${YOUR_CMSSW}/src/Validation # CMSSW version >= 12_2_0
$ git clone git@github.com:ywkao/PlaygroundEDProducer.git
$ mkdir eos # one can create a soft link for an output root file from DQM EDAnalyzer
$ time scram b -j10
$ time cmsRun python/ExampleConfig_cfg.py
```
