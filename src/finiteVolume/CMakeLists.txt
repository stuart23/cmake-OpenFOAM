set( SOURCES

fvMesh/fvMeshGeometry.C
fvMesh/fvMesh.C

fvMesh/singleCellFvMesh/singleCellFvMesh.C

fvMesh/fvBoundaryMesh/fvBoundaryMesh.C

fvMesh/fvPatches/fvPatch/fvPatch.C
fvMesh/fvPatches/fvPatch/fvPatchNew.C

fvMesh/fvPatches/basic/coupled/coupledFvPatch.C
fvMesh/fvPatches/basic/generic/genericFvPatch.C

fvMesh/fvPatches/constraint/cyclic/cyclicFvPatch.C
fvMesh/fvPatches/constraint/cyclicAMI/cyclicAMIFvPatch.C
fvMesh/fvPatches/constraint/cyclicACMI/cyclicACMIFvPatch.C
fvMesh/fvPatches/constraint/cyclicSlip/cyclicSlipFvPatch.C
fvMesh/fvPatches/constraint/empty/emptyFvPatch.C
fvMesh/fvPatches/constraint/nonuniformTransformCyclic/nonuniformTransformCyclicFvPatch.C
fvMesh/fvPatches/constraint/processor/processorFvPatch.C
fvMesh/fvPatches/constraint/processorCyclic/processorCyclicFvPatch.C
fvMesh/fvPatches/constraint/symmetryPlane/symmetryPlaneFvPatch.C
fvMesh/fvPatches/constraint/symmetry/symmetryFvPatch.C
fvMesh/fvPatches/constraint/wedge/wedgeFvPatch.C

fvMesh/fvPatches/derived/wall/wallFvPatch.C
fvMesh/fvPatches/derived/mapped/mappedFvPatch.C
fvMesh/fvPatches/derived/mapped/mappedWallFvPatch.C
fvMesh/fvPatches/derived/regionCoupled/regionCoupledBaseFvPatch.C
fvMesh/fvPatches/derived/regionCoupled/regionCoupledFvPatch.C
fvMesh/fvPatches/derived/regionCoupled/regionCoupledWallFvPatch.C

fvMesh/wallDist/wallPointYPlus/wallPointYPlus.C
fvMesh/wallDist/nearWallDist/nearWallDistNoSearch.C
fvMesh/wallDist/nearWallDist/nearWallDist.C
fvMesh/wallDist/wallDist/wallDist.C
fvMesh/wallDist/patchDistMethods/patchDistMethod/patchDistMethod.C
fvMesh/wallDist/patchDistMethods/meshWave/meshWavePatchDistMethod.C
fvMesh/wallDist/patchDistMethods/Poisson/PoissonPatchDistMethod.C
fvMesh/wallDist/patchDistMethods/advectionDiffusion/advectionDiffusionPatchDistMethod.C

fvMesh/fvMeshMapper/fvPatchMapper.C
fvMesh/fvMeshMapper/fvSurfaceMapper.C

fvMesh/extendedStencil/cellToCell/extendedCellToCellStencil.C
fvMesh/extendedStencil/cellToCell/extendedCentredCellToCellStencil.C
fvMesh/extendedStencil/cellToCell/globalIndexStencils/cellToCellStencil.C
fvMesh/extendedStencil/cellToCell/globalIndexStencils/CFCCellToCellStencil.C
fvMesh/extendedStencil/cellToCell/globalIndexStencils/CPCCellToCellStencil.C
fvMesh/extendedStencil/cellToCell/globalIndexStencils/CECCellToCellStencil.C
fvMesh/extendedStencil/cellToCell/MeshObjects/centredCECCellToCellStencilObject.C
fvMesh/extendedStencil/cellToCell/MeshObjects/centredCFCCellToCellStencilObject.C
fvMesh/extendedStencil/cellToCell/MeshObjects/centredCPCCellToCellStencilObject.C

fvMesh/extendedStencil/cellToFace/globalIndexStencils/cellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/globalIndexStencils/CFCCellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/globalIndexStencils/CECCellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/globalIndexStencils/CPCCellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/globalIndexStencils/FECCellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/extendedCellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/extendedCentredCellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/extendedUpwindCellToFaceStencil.C
fvMesh/extendedStencil/cellToFace/MeshObjects/centredCECCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/centredCFCCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/centredCPCCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/centredFECCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/upwindCECCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/upwindCFCCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/upwindCPCCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/upwindFECCellToFaceStencilObject.C
fvMesh/extendedStencil/cellToFace/MeshObjects/pureUpwindCFCCellToFaceStencilObject.C

fvMesh/extendedStencil/faceToCell/globalIndexStencils/faceToCellStencil.C
fvMesh/extendedStencil/faceToCell/globalIndexStencils/CFCFaceToCellStencil.C
fvMesh/extendedStencil/faceToCell/extendedFaceToCellStencil.C
fvMesh/extendedStencil/faceToCell/extendedCentredFaceToCellStencil.C
fvMesh/extendedStencil/faceToCell/MeshObjects/centredCFCFaceToCellStencilObject.C

fvMesh/fvMeshFunctionObject/fvMeshFunctionObject.C

fields/fvPatchFields/fvPatchField/fvPatchFields.C

fields/fvPatchFields/basic/basicSymmetry/basicSymmetryFvPatchScalarField.C
fields/fvPatchFields/basic/calculated/calculatedFvPatchFields.C
fields/fvPatchFields/basic/extrapolatedCalculated/extrapolatedCalculatedFvPatchFields.C
fields/fvPatchFields/basic/coupled/coupledFvPatchFields.C
fields/fvPatchFields/basic/directionMixed/directionMixedFvPatchFields.C
fields/fvPatchFields/basic/fixedGradient/fixedGradientFvPatchFields.C
fields/fvPatchFields/basic/fixedValue/fixedValueFvPatchFields.C
fields/fvPatchFields/basic/mixed/mixedFvPatchFields.C
fields/fvPatchFields/basic/sliced/slicedFvPatchFields.C
fields/fvPatchFields/basic/transform/transformFvPatchFields.C
fields/fvPatchFields/basic/transform/transformFvPatchScalarField.C
fields/fvPatchFields/basic/zeroGradient/zeroGradientFvPatchFields.C

fields/fvPatchFields/constraint/cyclic/cyclicFvPatchFields.C
fields/fvPatchFields/constraint/cyclicAMI/cyclicAMIFvPatchFields.C
fields/fvPatchFields/constraint/cyclicACMI/cyclicACMIFvPatchFields.C
fields/fvPatchFields/constraint/cyclicSlip/cyclicSlipFvPatchFields.C
fields/fvPatchFields/constraint/empty/emptyFvPatchFields.C
fields/fvPatchFields/constraint/jumpCyclic/jumpCyclicFvPatchFields.C
fields/fvPatchFields/constraint/jumpCyclicAMI/jumpCyclicAMIFvPatchFields.C
fields/fvPatchFields/constraint/nonuniformTransformCyclic/nonuniformTransformCyclicFvPatchFields.C
fields/fvPatchFields/constraint/processor/processorFvPatchFields.C
fields/fvPatchFields/constraint/processor/processorFvPatchScalarField.C
fields/fvPatchFields/constraint/processorCyclic/processorCyclicFvPatchFields.C
fields/fvPatchFields/constraint/symmetryPlane/symmetryPlaneFvPatchFields.C
fields/fvPatchFields/constraint/symmetryPlane/symmetryPlaneFvPatchScalarField.C
fields/fvPatchFields/constraint/symmetry/symmetryFvPatchFields.C
fields/fvPatchFields/constraint/wedge/wedgeFvPatchFields.C
fields/fvPatchFields/constraint/wedge/wedgeFvPatchScalarField.C

fields/fvPatchFields/derived/activeBaffleVelocity/activeBaffleVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/activePressureForceBaffleVelocity/activePressureForceBaffleVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/advective/advectiveFvPatchFields.C
fields/fvPatchFields/derived/codedFixedValue/codedFixedValueFvPatchFields.C
fields/fvPatchFields/derived/codedMixed/codedMixedFvPatchFields.C
fields/fvPatchFields/derived/cylindricalInletVelocity/cylindricalInletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/externalCoupledMixed/externalCoupledMixedFvPatchFields.C
fields/fvPatchFields/derived/fan/fanFvPatchFields.C
fields/fvPatchFields/derived/fanPressure/fanPressureFvPatchScalarField.C
fields/fvPatchFields/derived/fixedFluxPressure/fixedFluxPressureFvPatchScalarField.C
fields/fvPatchFields/derived/fixedFluxExtrapolatedPressure/fixedFluxExtrapolatedPressureFvPatchScalarField.C
fields/fvPatchFields/derived/fixedInternalValueFvPatchField/fixedInternalValueFvPatchFields.C
fields/fvPatchFields/derived/fixedJump/fixedJumpFvPatchFields.C
fields/fvPatchFields/derived/fixedJumpAMI/fixedJumpAMIFvPatchFields.C
fields/fvPatchFields/derived/fixedMean/fixedMeanFvPatchFields.C
fields/fvPatchFields/derived/fixedNormalSlip/fixedNormalSlipFvPatchFields.C
fields/fvPatchFields/derived/fixedPressureCompressibleDensity/fixedPressureCompressibleDensityFvPatchScalarField.C
fields/fvPatchFields/derived/flowRateInletVelocity/flowRateInletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/fluxCorrectedVelocity/fluxCorrectedVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/freestream/freestreamFvPatchFields.C
fields/fvPatchFields/derived/freestreamPressure/freestreamPressureFvPatchScalarField.C
fields/fvPatchFields/derived/inletOutlet/inletOutletFvPatchFields.C
fields/fvPatchFields/derived/inletOutletTotalTemperature/inletOutletTotalTemperatureFvPatchScalarField.C
fields/fvPatchFields/derived/mappedField/mappedFieldFvPatchFields.C
fields/fvPatchFields/derived/mappedFixedInternalValue/mappedFixedInternalValueFvPatchFields.C
fields/fvPatchFields/derived/mappedFixedPushedInternalValue/mappedFixedPushedInternalValueFvPatchFields.C
fields/fvPatchFields/derived/mappedFixedValue/mappedFixedValueFvPatchFields.C
fields/fvPatchFields/derived/mappedFlowRate/mappedFlowRateFvPatchVectorField.C
fields/fvPatchFields/derived/mappedVelocityFluxFixedValue/mappedVelocityFluxFixedValueFvPatchField.C
fields/fvPatchFields/derived/noSlip/noSlipFvPatchVectorField.C
fields/fvPatchFields/derived/movingWallVelocity/movingWallVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/outletInlet/outletInletFvPatchFields.C
fields/fvPatchFields/derived/outletMappedUniformInlet/outletMappedUniformInletFvPatchFields.C
fields/fvPatchFields/derived/partialSlip/partialSlipFvPatchFields.C
fields/fvPatchFields/derived/phaseHydrostaticPressure/phaseHydrostaticPressureFvPatchScalarField.C
fields/fvPatchFields/derived/pressureDirectedInletOutletVelocity/pressureDirectedInletOutletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/pressureDirectedInletVelocity/pressureDirectedInletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/pressureInletOutletParSlipVelocity/pressureInletOutletParSlipVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/pressureInletOutletVelocity/pressureInletOutletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/pressureInletUniformVelocity/pressureInletUniformVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/pressureInletVelocity/pressureInletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/pressureNormalInletOutletVelocity/pressureNormalInletOutletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/fixedNormalInletOutletVelocity/fixedNormalInletOutletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/rotatingPressureInletOutletVelocity/rotatingPressureInletOutletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/rotatingTotalPressure/rotatingTotalPressureFvPatchScalarField.C
fields/fvPatchFields/derived/rotatingWallVelocity/rotatingWallVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/slip/slipFvPatchFields.C
fields/fvPatchFields/derived/supersonicFreestream/supersonicFreestreamFvPatchVectorField.C
fields/fvPatchFields/derived/surfaceNormalFixedValue/surfaceNormalFixedValueFvPatchVectorField.C
fields/fvPatchFields/derived/swirlFlowRateInletVelocity/swirlFlowRateInletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/syringePressure/syringePressureFvPatchScalarField.C
fields/fvPatchFields/derived/timeVaryingMappedFixedValue/AverageIOFields.C
fields/fvPatchFields/derived/timeVaryingMappedFixedValue/timeVaryingMappedFixedValueFvPatchFields.C
fields/fvPatchFields/derived/totalPressure/totalPressureFvPatchScalarField.C
fields/fvPatchFields/derived/totalTemperature/totalTemperatureFvPatchScalarField.C
fields/fvPatchFields/derived/translatingWallVelocity/translatingWallVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/turbulentInlet/turbulentInletFvPatchFields.C
fields/fvPatchFields/derived/turbulentIntensityKineticEnergyInlet/turbulentIntensityKineticEnergyInletFvPatchScalarField.C
fields/fvPatchFields/derived/uniformDensityHydrostaticPressure/uniformDensityHydrostaticPressureFvPatchScalarField.C
fields/fvPatchFields/derived/uniformFixedGradient/uniformFixedGradientFvPatchFields.C
fields/fvPatchFields/derived/uniformFixedValue/uniformFixedValueFvPatchFields.C
fields/fvPatchFields/derived/uniformInletOutlet/uniformInletOutletFvPatchFields.C
fields/fvPatchFields/derived/uniformJump/uniformJumpFvPatchFields.C
fields/fvPatchFields/derived/uniformJumpAMI/uniformJumpAMIFvPatchFields.C
fields/fvPatchFields/derived/uniformTotalPressure/uniformTotalPressureFvPatchScalarField.C
fields/fvPatchFields/derived/variableHeightFlowRate/variableHeightFlowRateFvPatchField.C
fields/fvPatchFields/derived/variableHeightFlowRateInletVelocity/variableHeightFlowRateInletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/outletPhaseMeanVelocity/outletPhaseMeanVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/waveTransmissive/waveTransmissiveFvPatchFields.C
fields/fvPatchFields/derived/waveSurfacePressure/waveSurfacePressureFvPatchScalarField.C
fields/fvPatchFields/derived/interstitialInletVelocity/interstitialInletVelocityFvPatchVectorField.C
fields/fvPatchFields/derived/prghPressure/prghPressureFvPatchScalarField.C
fields/fvPatchFields/derived/prghTotalPressure/prghTotalPressureFvPatchScalarField.C
fields/fvPatchFields/derived/prghTotalHydrostaticPressure/prghTotalHydrostaticPressureFvPatchScalarField.C
fields/fvPatchFields/derived/fixedProfile/fixedProfileFvPatchFields.C
fields/fvPatchFields/derived/plenumPressure/plenumPressureFvPatchScalarField.C

fields/fvsPatchFields/fvsPatchField/fvsPatchFields.C

fields/fvsPatchFields/basic/calculated/calculatedFvsPatchFields.C
fields/fvsPatchFields/basic/coupled/coupledFvsPatchFields.C
fields/fvsPatchFields/basic/fixedValue/fixedValueFvsPatchFields.C
fields/fvsPatchFields/basic/sliced/slicedFvsPatchFields.C

fields/fvsPatchFields/constraint/cyclic/cyclicFvsPatchFields.C
fields/fvsPatchFields/constraint/cyclicAMI/cyclicAMIFvsPatchFields.C
fields/fvsPatchFields/constraint/cyclicACMI/cyclicACMIFvsPatchFields.C
fields/fvsPatchFields/constraint/cyclicSlip/cyclicSlipFvsPatchFields.C
fields/fvsPatchFields/constraint/empty/emptyFvsPatchFields.C
fields/fvsPatchFields/constraint/nonuniformTransformCyclic/nonuniformTransformCyclicFvsPatchFields.C
fields/fvsPatchFields/constraint/processor/processorFvsPatchFields.C
fields/fvsPatchFields/constraint/processorCyclic/processorCyclicFvsPatchFields.C
fields/fvsPatchFields/constraint/symmetryPlane/symmetryPlaneFvsPatchFields.C
fields/fvsPatchFields/constraint/symmetry/symmetryFvsPatchFields.C
fields/fvsPatchFields/constraint/wedge/wedgeFvsPatchFields.C

fields/volFields/volFields.C
fields/surfaceFields/surfaceFields.C

fvMatrices/fvMatrices.C
fvMatrices/fvScalarMatrix/fvScalarMatrix.C
fvMatrices/solvers/MULES/MULES.C
fvMatrices/solvers/MULES/CMULES.C
fvMatrices/solvers/MULES/IMULES.C
fvMatrices/solvers/GAMGSymSolver/GAMGAgglomerations/faceAreaPairGAMGAgglomeration/faceAreaPairGAMGAgglomeration.C

interpolation/interpolation/interpolation/interpolations.C

interpolation/interpolation/interpolationCell/makeInterpolationCell.C
interpolation/interpolation/interpolationCellPatchConstrained/makeInterpolationCellPatchConstrained.C
interpolation/interpolation/interpolationCellPoint/cellPointWeight/cellPointWeight.C
interpolation/interpolation/interpolationCellPoint/makeInterpolationCellPoint.C
interpolation/interpolation/interpolationCellPointFace/makeInterpolationCellPointFace.C
interpolation/interpolation/interpolationCellPointWallModified/cellPointWeightWallModified/cellPointWeightWallModified.C
interpolation/interpolation/interpolationCellPointWallModified/makeInterpolationCellPointWallModified.C
interpolation/interpolation/interpolationPointMVC/pointMVCWeight.C
interpolation/interpolation/interpolationPointMVC/makeInterpolationPointMVC.C

interpolation/volPointInterpolation/volPointInterpolation.C
interpolation/volPointInterpolation/pointConstraints.C

interpolation/surfaceInterpolation/surfaceInterpolation/surfaceInterpolation.C
interpolation/surfaceInterpolation/surfaceInterpolationScheme/surfaceInterpolationSchemes.C

interpolation/surfaceInterpolation/blendedSchemeBase/blendedSchemeBaseName.C

interpolation/surfaceInterpolation/schemes/linear/linear.C
interpolation/surfaceInterpolation/schemes/pointLinear/pointLinear.C
interpolation/surfaceInterpolation/schemes/midPoint/midPoint.C
interpolation/surfaceInterpolation/schemes/downwind/downwind.C
interpolation/surfaceInterpolation/schemes/weighted/weighted.C
interpolation/surfaceInterpolation/schemes/cubic/cubic.C
interpolation/surfaceInterpolation/schemes/skewCorrected/skewCorrectionVectors.C
interpolation/surfaceInterpolation/schemes/skewCorrected/skewCorrected.C
interpolation/surfaceInterpolation/schemes/outletStabilised/outletStabilised.C
interpolation/surfaceInterpolation/schemes/reverseLinear/reverseLinear.C
interpolation/surfaceInterpolation/schemes/clippedLinear/clippedLinear.C
interpolation/surfaceInterpolation/schemes/harmonic/harmonic.C
interpolation/surfaceInterpolation/schemes/fixedBlended/fixedBlended.C
interpolation/surfaceInterpolation/schemes/localBlended/localBlended.C
interpolation/surfaceInterpolation/schemes/limiterBlended/limiterBlended.C
interpolation/surfaceInterpolation/schemes/CoBlended/CoBlended.C
interpolation/surfaceInterpolation/schemes/cellCoBlended/cellCoBlended.C
interpolation/surfaceInterpolation/schemes/localMax/localMax.C
interpolation/surfaceInterpolation/schemes/localMin/localMin.C

interpolation/surfaceInterpolation/schemes/linearFit/linearFit.C
interpolation/surfaceInterpolation/schemes/biLinearFit/biLinearFit.C
interpolation/surfaceInterpolation/schemes/quadraticLinearFit/quadraticLinearFit.C
interpolation/surfaceInterpolation/schemes/quadraticFit/quadraticFit.C

interpolation/surfaceInterpolation/schemes/quadraticLinearUpwindFit/quadraticLinearUpwindFit.C
interpolation/surfaceInterpolation/schemes/quadraticUpwindFit/quadraticUpwindFit.C
interpolation/surfaceInterpolation/schemes/cubicUpwindFit/cubicUpwindFit.C
interpolation/surfaceInterpolation/schemes/linearPureUpwindFit/linearPureUpwindFit.C
interpolation/surfaceInterpolation/schemes/linearUpwind/linearUpwind.C
interpolation/surfaceInterpolation/schemes/linearUpwind/linearUpwindV.C
interpolation/surfaceInterpolation/schemes/LUST/LUST.C

interpolation/surfaceInterpolation/limitedSchemes/limitedSurfaceInterpolationScheme/limitedSurfaceInterpolationSchemes.C
interpolation/surfaceInterpolation/limitedSchemes/upwind/upwind.C
interpolation/surfaceInterpolation/limitedSchemes/blended/blended.C
interpolation/surfaceInterpolation/limitedSchemes/Gamma/Gamma.C
interpolation/surfaceInterpolation/limitedSchemes/SFCD/SFCD.C
interpolation/surfaceInterpolation/limitedSchemes/Minmod/Minmod.C
interpolation/surfaceInterpolation/limitedSchemes/vanLeer/vanLeer.C
interpolation/surfaceInterpolation/limitedSchemes/vanAlbada/vanAlbada.C
interpolation/surfaceInterpolation/limitedSchemes/OSPRE/OSPRE.C
interpolation/surfaceInterpolation/limitedSchemes/limitedLinear/limitedLinear.C
interpolation/surfaceInterpolation/limitedSchemes/limitedCubic/limitedCubic.C
interpolation/surfaceInterpolation/limitedSchemes/SuperBee/SuperBee.C
interpolation/surfaceInterpolation/limitedSchemes/QUICK/QUICK.C
interpolation/surfaceInterpolation/limitedSchemes/MUSCL/MUSCL.C
interpolation/surfaceInterpolation/limitedSchemes/UMIST/UMIST.C
interpolation/surfaceInterpolation/limitedSchemes/Phi/Phi.C
interpolation/surfaceInterpolation/limitedSchemes/filteredLinear/filteredLinear.C
interpolation/surfaceInterpolation/limitedSchemes/filteredLinear2/filteredLinear2.C
interpolation/surfaceInterpolation/limitedSchemes/filteredLinear3/filteredLinear3.C
interpolation/surfaceInterpolation/limitedSchemes/limitWith/limitWith.C

interpolation/surfaceInterpolation/multivariateSchemes/multivariateSurfaceInterpolationScheme/multivariateSurfaceInterpolationSchemes.C
interpolation/surfaceInterpolation/multivariateSchemes/multivariateSelectionScheme/multivariateSelectionSchemes.C
interpolation/surfaceInterpolation/multivariateSchemes/multivariateIndependentScheme/multivariateIndependentSchemes.C
interpolation/surfaceInterpolation/multivariateSchemes/upwind/multivariateUpwind.C
interpolation/surfaceInterpolation/multivariateSchemes/Gamma/multivariateGamma.C
interpolation/surfaceInterpolation/multivariateSchemes/vanLeer/multivariateVanLeer.C
interpolation/surfaceInterpolation/multivariateSchemes/Minmod/multivariateMinmod.C
interpolation/surfaceInterpolation/multivariateSchemes/SuperBee/multivariateSuperBee.C
interpolation/surfaceInterpolation/multivariateSchemes/MUSCL/multivariateMUSCL.C
interpolation/surfaceInterpolation/multivariateSchemes/limitedLinear/multivariateLimitedLinear.C
interpolation/surfaceInterpolation/multivariateSchemes/limitedCubic/multivariateLimitedCubic.C

finiteVolume/fv/fv.C
finiteVolume/fvSchemes/fvSchemes.C

finiteVolume/ddtSchemes/ddtScheme/ddtSchemes.C
finiteVolume/ddtSchemes/steadyStateDdtScheme/steadyStateDdtSchemes.C
finiteVolume/ddtSchemes/EulerDdtScheme/EulerDdtSchemes.C
finiteVolume/ddtSchemes/CoEulerDdtScheme/CoEulerDdtSchemes.C
finiteVolume/ddtSchemes/SLTSDdtScheme/SLTSDdtSchemes.C
finiteVolume/ddtSchemes/localEulerDdtScheme/localEulerDdt.C
finiteVolume/ddtSchemes/localEulerDdtScheme/localEulerDdtSchemes.C
finiteVolume/ddtSchemes/backwardDdtScheme/backwardDdtSchemes.C
finiteVolume/ddtSchemes/CrankNicolsonDdtScheme/CrankNicolsonDdtSchemes.C
finiteVolume/ddtSchemes/boundedDdtScheme/boundedDdtSchemes.C

finiteVolume/d2dt2Schemes/d2dt2Scheme/d2dt2Schemes.C
finiteVolume/d2dt2Schemes/steadyStateD2dt2Scheme/steadyStateD2dt2Schemes.C
finiteVolume/d2dt2Schemes/EulerD2dt2Scheme/EulerD2dt2Schemes.C

finiteVolume/divSchemes/divScheme/divSchemes.C
finiteVolume/divSchemes/gaussDivScheme/gaussDivSchemes.C

finiteVolume/gradSchemes/gradScheme/gradSchemes.C
finiteVolume/gradSchemes/gaussGrad/gaussGrads.C

finiteVolume/gradSchemes/leastSquaresGrad/leastSquaresVectors.C
finiteVolume/gradSchemes/leastSquaresGrad/leastSquaresGrads.C
finiteVolume/gradSchemes/LeastSquaresGrad/LeastSquaresGrads.C
finiteVolume/gradSchemes/fourthGrad/fourthGrads.C

finiteVolume/gradSchemes/limitedGradSchemes/faceLimitedGrad/faceLimitedGrads.C
finiteVolume/gradSchemes/limitedGradSchemes/cellLimitedGrad/cellLimitedGrads.C
finiteVolume/gradSchemes/limitedGradSchemes/faceMDLimitedGrad/faceMDLimitedGrads.C
finiteVolume/gradSchemes/limitedGradSchemes/cellMDLimitedGrad/cellMDLimitedGrads.C

finiteVolume/snGradSchemes/snGradScheme/snGradSchemes.C
finiteVolume/snGradSchemes/correctedSnGrad/correctedSnGrads.C
finiteVolume/snGradSchemes/faceCorrectedSnGrad/faceCorrectedSnGrads.C
finiteVolume/snGradSchemes/limitedSnGrad/limitedSnGrads.C
finiteVolume/snGradSchemes/uncorrectedSnGrad/uncorrectedSnGrads.C
finiteVolume/snGradSchemes/orthogonalSnGrad/orthogonalSnGrads.C
finiteVolume/snGradSchemes/quadraticFitSnGrad/quadraticFitSnGrads.C
finiteVolume/snGradSchemes/linearFitSnGrad/linearFitSnGrads.C

finiteVolume/convectionSchemes/convectionScheme/convectionSchemes.C
finiteVolume/convectionSchemes/gaussConvectionScheme/gaussConvectionSchemes.C
finiteVolume/convectionSchemes/multivariateGaussConvectionScheme/multivariateGaussConvectionSchemes.C
finiteVolume/convectionSchemes/boundedConvectionScheme/boundedConvectionSchemes.C

finiteVolume/laplacianSchemes/laplacianScheme/laplacianSchemes.C
finiteVolume/laplacianSchemes/gaussLaplacianScheme/gaussLaplacianSchemes.C

finiteVolume/fvc/fvcMeshPhi.C
finiteVolume/fvc/fvcSmooth/fvcSmooth.C
finiteVolume/fvc/fvcReconstructMag.C

cfdTools/general/findRefCell/findRefCell.C
cfdTools/general/constrainHbyA/constrainHbyA.C
cfdTools/general/adjustPhi/adjustPhi.C
cfdTools/general/bound/bound.C
cfdTools/general/CorrectPhi/correctUphiBCs.C

cfdTools/general/solutionControl/solutionControl/solutionControl.C
cfdTools/general/solutionControl/simpleControl/simpleControl.C
cfdTools/general/solutionControl/pimpleControl/pimpleControl.C
cfdTools/general/solutionControl/pisoControl/pisoControl.C

cfdTools/general/porosityModel/porosityModel/porosityModel.C
cfdTools/general/porosityModel/porosityModel/porosityModelNew.C
cfdTools/general/porosityModel/porosityModel/porosityModelList.C
cfdTools/general/porosityModel/porosityModel/IOporosityModelList.C
cfdTools/general/porosityModel/DarcyForchheimer/DarcyForchheimer.C
cfdTools/general/porosityModel/fixedCoeff/fixedCoeff.C
cfdTools/general/porosityModel/powerLaw/powerLaw.C

cfdTools/general/MRF/MRFZone.C
cfdTools/general/MRF/MRFZoneList.C
cfdTools/general/MRF/IOMRFZoneList.C

cfdTools/general/SRF/SRFModel/SRFModel/SRFModel.C
cfdTools/general/SRF/SRFModel/SRFModel/SRFModelNew.C
cfdTools/general/SRF/SRFModel/rpm/rpm.C
cfdTools/general/SRF/derivedFvPatchFields/SRFVelocityFvPatchVectorField/SRFVelocityFvPatchVectorField.C
cfdTools/general/SRF/derivedFvPatchFields/SRFWallVelocityFvPatchVectorField/SRFWallVelocityFvPatchVectorField.C
cfdTools/general/SRF/derivedFvPatchFields/SRFFreestreamVelocityFvPatchVectorField/SRFFreestreamVelocityFvPatchVectorField.C

cfdTools/general/fvOptions/fvOption.C
cfdTools/general/fvOptions/fvOptionIO.C
cfdTools/general/fvOptions/fvOptionList.C
cfdTools/general/fvOptions/fvOptions.C
)

## Define the output
add_library( finiteVolume SHARED ${SOURCES} )
install( TARGETS finiteVolume DESTINATION lib )

target_link_libraries( finiteVolume OpenFOAM triSurface meshTools )

include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/cpuTime )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/memInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OSspecific/POSIX/signals )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/algorithms/indexedOctree )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/HashTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/HashTables/Map )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/ILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/LPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/accessTypes/UILList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/DLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/linkTypes/SLListBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/LinkedLists/user )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/BiIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/DynamicList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/FixedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/IndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/List )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/ListOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PackedList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/PtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SortableList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/SubList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UIndirectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/Lists/UPtrList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/containers/NamedEnum )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/CompactIOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOobjects/IOdictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Fstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/IOstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Pstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Sstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/StringStreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/Tstreams )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/IOstreams/token )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/Time )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/Time/instant )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/entry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dictionary/primitiveEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dynamicLibrary/codedBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dynamicLibrary/dlLibraryTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/dynamicLibrary/dynamicCode )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/error )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/functionObjects/functionObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/functionObjects/functionObjectList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/objectRegistry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/regIOobject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/runTimeSelection/construction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/db/typeInfo )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionSet )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedSphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedSymmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/dimensionedTypes/dimensionedVector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedScalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedSphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedSymmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/DimensionedFields/DimensionedTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/FieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/oneFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/scalarFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/sphericalTensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/symmTensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/tensorFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/FieldFields/zeroFieldField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/Field )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/diagTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/labelField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/oneField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/scalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/sphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/symmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/symmTransformField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/tensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/transformField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/transformList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/vectorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/Fields/zeroField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricScalarField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricSphericalTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricSymmTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/GeometricTensorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/SlicedGeometricField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/geometricOneField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/geometricZeroField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/GeometricFields/pointFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/UniformDimensionedFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/cloud )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/basic/value )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/pointPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/fields/pointPatchFields/pointPatchField/pointConstraint )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/argList )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/clock )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/atomic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/electromagnetic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/fundamental )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/mathematical )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/physicoChemical )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/thermodynamic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/constants/universal )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/debug )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/global/unitConversion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/include )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/interpolations/interpolationTable )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/interpolations/interpolationTable/tableReaders )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/interpolations/interpolationTable/tableReaders/openFoam )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/DiagonalMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/LduMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/LduMatrix/LduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/LduMatrix/Solvers/DiagonalSolver )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/Matrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/RectangularMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/SymmetricSquareMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/cyclicLduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/lduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduInterfaceFields/processorLduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduAddressing/lduSchedule )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/lduMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/GAMGAgglomeration )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/lduMatrix/solvers/GAMG/GAMGAgglomerations/pairGAMGAgglomeration )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/scalarMatrices )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/scalarMatrices/SVD )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/matrices/solution )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/Xfer )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/autoPtr )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/refCount )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/memory/tmp )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/GeoMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/Identifiers/patch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/MeshObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/ProcessorTopology )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/bandCompression )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/boundBox )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/data )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/lduMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cell )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/cellShape )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/edge )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/face )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshShapes/triFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/meshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/facePointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/pointMesh/pointPatches/pointPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/globalMeshData )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/cellMapper )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/faceMapper )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/mapDistribute )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/mapPolyMesh/objectMap )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyMeshTetDecomposition )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/basic/generic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/cyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/cyclicSlip )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/nonuniformTransformCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/processorCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/symmetry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/symmetryPlane )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/constraint/wedge )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/derived/wall )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/polyPatches/polyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/syncTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/ZoneMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/cellZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/faceZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/pointZone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/polyMesh/zones/zone )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/PrimitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveMesh/primitivePatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/line )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/objectHit )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/plane )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/point2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/tetrahedron )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/primitiveShapes/triangle )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/meshes/treeBoundBox )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/DiagTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/DiagTensor/diagTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Pair )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/doubleScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/floatScalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Scalar/scalar )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SphericalTensor/sphericalTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Swap )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SymmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/SymmTensor/symmTensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tensor/tensor )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Tuple2 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector/vector )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/Vector2D/vector2D )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/VectorSpace )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/Switch )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/bool )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/bools/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/chars/char )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/contiguous )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/direction )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/DataEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/functions/DataEntry/PolynomialEntry )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/globalIndexAndTransform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/globalIndexAndTransform/vectorTensorTransform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hash )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/Hasher )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/hashes/SHA1 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/int64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/label )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uLabel )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint32 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ints/uint64 )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nil )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/nullObject )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/one )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ops )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/pTraits )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/quaternion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/random/Random )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/random/cachedRandom )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/ranges/scalarRange )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/septernion )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/fileName )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/keyType )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/lists )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/string )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/stringOps )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/word )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/strings/wordRe )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/transform )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/triad )
include_directories( ${CMAKE_SOURCE_DIR}/src/OpenFOAM/primitives/zero )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/CorrectPhi )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/MRF )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/SRF/SRFModel/SRFModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/SRF/SRFModel/rpm )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/SRF/derivedFvPatchFields/SRFFreestreamVelocityFvPatchVectorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/SRF/derivedFvPatchFields/SRFVelocityFvPatchVectorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/SRF/derivedFvPatchFields/SRFWallVelocityFvPatchVectorField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/adjustPhi )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/bound )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/findRefCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/include )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/porosityModel/DarcyForchheimer )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/porosityModel/fixedCoeff )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/porosityModel/porosityModel )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/solutionControl/pimpleControl )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/solutionControl/pisoControl )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/solutionControl/simpleControl )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/cfdTools/general/solutionControl/solutionControl )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/basicSymmetry )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/directionMixed )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/fixedGradient )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/fixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/mixed )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/sliced )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/transform )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/basic/zeroGradient )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/cyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/cyclicACMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/cyclicAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/cyclicSlip )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/jumpCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/jumpCyclicAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/nonuniformTransformCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/processorCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/symmetry )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/symmetryPlane )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/constraint/wedge )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/activeBaffleVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/activePressureForceBaffleVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/advective )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/codedFixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/codedMixed )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/cylindricalInletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/externalCoupledMixed )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fan )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fanPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedFluxPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedInternalValueFvPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedJump )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedJumpAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedMean )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedNormalInletOutletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedNormalSlip )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fixedPressureCompressibleDensity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/flowRateInletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/fluxCorrectedVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/freestream )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/freestreamPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/inletOutlet )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/inletOutletTotalTemperature )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/interstitialInletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/mappedField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/mappedFixedInternalValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/mappedFixedPushedInternalValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/mappedFixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/mappedFlowRate )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/mappedVelocityFluxFixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/movingWallVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/oscillatingFixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/outletInlet )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/outletMappedUniformInlet )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/outletPhaseMeanVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/partialSlip )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/phaseHydrostaticPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/pressureDirectedInletOutletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/pressureDirectedInletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/pressureInletOutletParSlipVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/pressureInletOutletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/pressureInletUniformVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/pressureInletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/pressureNormalInletOutletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/prghPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/prghTotalPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/rotatingPressureInletOutletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/rotatingTotalPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/rotatingWallVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/slip )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/supersonicFreestream )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/surfaceNormalFixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/swirlFlowRateInletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/syringePressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/timeVaryingMappedFixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/totalPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/totalTemperature )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/translatingWallVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/turbulentInlet )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/turbulentIntensityKineticEnergyInlet )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/uniformDensityHydrostaticPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/uniformFixedGradient )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/uniformFixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/uniformInletOutlet )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/uniformJump )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/uniformJumpAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/uniformTotalPressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/variableHeightFlowRate )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/variableHeightFlowRateInletVelocity )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/waveSurfacePressure )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/derived/waveTransmissive )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvPatchFields/fvPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/basic/calculated )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/basic/fixedValue )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/basic/sliced )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/cyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/cyclicACMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/cyclicAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/cyclicSlip )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/nonuniformTransformCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/processorCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/symmetry )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/symmetryPlane )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/constraint/wedge )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/fvsPatchFields/fvsPatchField )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/surfaceFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fields/volFields )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/convectionSchemes/boundedConvectionScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/convectionSchemes/convectionScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/convectionSchemes/gaussConvectionScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/convectionSchemes/multivariateGaussConvectionScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/d2dt2Schemes/EulerD2dt2Scheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/d2dt2Schemes/d2dt2Scheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/d2dt2Schemes/steadyStateD2dt2Scheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/CoEulerDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/CrankNicolsonDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/EulerDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/SLTSDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/backwardDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/boundedDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/ddtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/localEulerDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/ddtSchemes/steadyStateDdtScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/divSchemes/divScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/divSchemes/gaussDivScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fv )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fvSchemes )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fvSolution )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fvc )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fvc/fvcSmooth )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/fvm )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/LeastSquaresGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/fourthGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/gaussGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/gradScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/leastSquaresGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/limitedGradSchemes/cellLimitedGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/limitedGradSchemes/cellMDLimitedGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/limitedGradSchemes/faceLimitedGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/gradSchemes/limitedGradSchemes/faceMDLimitedGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/laplacianSchemes/gaussLaplacianScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/laplacianSchemes/laplacianScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/snGradSchemes/CentredFitSnGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/snGradSchemes/correctedSnGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/snGradSchemes/faceCorrectedSnGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/snGradSchemes/limitedSnGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/snGradSchemes/orthogonalSnGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/snGradSchemes/snGradScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/finiteVolume/snGradSchemes/uncorrectedSnGrad )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMatrices )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMatrices/fvMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMatrices/fvScalarMatrix )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMatrices/solvers/GAMGSymSolver/GAMGAgglomerations/faceAreaPairGAMGAgglomeration )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMatrices/solvers/MULES )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/cellToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/cellToCell/MeshObjects )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/cellToCell/globalIndexStencils )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/cellToFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/cellToFace/MeshObjects )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/cellToFace/globalIndexStencils )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/faceToCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/faceToCell/MeshObjects )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/extendedStencil/faceToCell/globalIndexStencils )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvBoundaryMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvMeshMapper )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvMeshSubset )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/basic/coupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/basic/generic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/cyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/cyclicACMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/cyclicAMI )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/cyclicSlip )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/empty )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/nonuniformTransformCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/processor )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/processorCyclic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/symmetry )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/symmetryPlane )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/constraint/wedge )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/derived/mapped )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/derived/regionCoupled )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/derived/wall )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/fvPatches/fvPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/singleCellFvMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/wallDist/nearWallDist )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/wallDist/patchDistMethods/Poisson )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/wallDist/patchDistMethods/advectionDiffusion )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/wallDist/patchDistMethods/meshWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/wallDist/patchDistMethods/patchDistMethod )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/wallDist/wallDist )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/fvMesh/wallDist/wallPointYPlus )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationCell )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationCellPatchConstrained )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationCellPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationCellPoint/cellPointWeight )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationCellPointFace )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationCellPointWallModified )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationCellPointWallModified/cellPointWeightWallModified )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/interpolation/interpolationPointMVC )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/mapping/fvFieldMappers )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/blendedSchemeBase )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/Gamma )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/Limited )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/Limited01 )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/LimitedScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/MUSCL )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/Minmod )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/OSPRE )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/Phi )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/PhiScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/QUICK )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/SFCD )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/SuperBee )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/UMIST )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/blended )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/filteredLinear )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/filteredLinear2 )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/filteredLinear3 )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/limitWith )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/limitedCubic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/limitedLinear )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/limitedSurfaceInterpolationScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/upwind )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/vanAlbada )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/limitedSchemes/vanLeer )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/multivariateSchemes/multivariateIndependentScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/multivariateSchemes/multivariateScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/multivariateSchemes/multivariateSelectionScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/multivariateSchemes/multivariateSurfaceInterpolationScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/multivariateSchemes/upwind )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/CentredFitScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/CoBlended )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/FitData )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/LUST )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/PureUpwindFitScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/UpwindFitScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/biLinearFit )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/cellCoBlended )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/clippedLinear )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/cubic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/cubicUpwindFit )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/downwind )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/fixedBlended )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/harmonic )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/limiterBlended )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/linear )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/linearFit )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/linearUpwind )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/localBlended )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/localMax )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/localMin )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/midPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/outletStabilised )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/pointLinear )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/quadraticFit )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/quadraticLinearFit )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/quadraticLinearUpwindFit )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/quadraticUpwindFit )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/reverseLinear )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/skewCorrected )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/schemes/weighted )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/surfaceInterpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/surfaceInterpolation/surfaceInterpolationScheme )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/interpolation/volPointInterpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/surfaceMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/finiteVolume/volMesh )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/AMIInterpolation/AMIMethod/AMIMethod )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/faceAreaIntersect )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicACMI/cyclicACMILduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicACMI/cyclicACMIPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicAMI/cyclicAMILduInterfaceField )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/AMIInterpolation/patches/cyclicAMI/cyclicAMIPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/algorithms/MeshWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellDist )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellDist/patchWave )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/cellDist/wallPoint )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/coordinateSystems )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/coordinateSystems/coordinateRotation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/indexedOctree )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/mappedPatches/mappedPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/meshTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionCoupled/patches/regionCoupledLduInterface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/regionCoupled/patches/regionCoupledPolyPatch )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/searchableSurface )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/sets/topoSets )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/surfaceLocation )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triSurfaceTools )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/triSurface/triangleFuncs )
include_directories( ${CMAKE_SOURCE_DIR}/src/meshTools/twoDPointCorrector )
include_directories( ${CMAKE_SOURCE_DIR}/src/transportModels/incompressible/viscosityModels/powerLaw )
include_directories( ${CMAKE_SOURCE_DIR}/src/transportModels/incompressible/viscosityModels/viscosityModel )

