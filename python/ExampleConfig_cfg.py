import FWCore.ParameterSet.Config as cms

process = cms.Process("Demo")

process.load("FWCore.MessageService.MessageLogger_cfi")

# process one event temporarily (we loop over an ntuple in analyze()...)
process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(1) )

process.source = cms.Source("PoolSource",
    # A dummy step2.root file
    fileNames = cms.untracked.vstring(
        'file:/eos/user/y/ykao/www/HGCAL_Geant4_project/testbeam_positron_D86_R80To130_E100/step2.root'
    )
)

process.playgroundedproducer = cms.EDProducer('PlaygroundEDProducer')

# Output definition
process.out = cms.OutputModule("PoolOutputModule",
    fileName = cms.untracked.string('file:output/playground_output_RecHits.root'),
    outputCommands = cms.untracked.vstring('drop *', 'keep *_*_*_Demo'),
    # type_label_instance_process
)

process.p = cms.Path(process.playgroundedproducer)
process.e = cms.EndPath(process.out)
