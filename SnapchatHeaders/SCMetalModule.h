//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCProcessingModule-Protocol.h"

@class NSString;
@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLFunction, MTLLibrary, SCMetalRenderCommand;

@interface SCMetalModule : NSObject <SCProcessingModule>
{
    id <SCMetalRenderCommand> _metalRenderCommand;
    id <MTLLibrary> _library;
    id <MTLFunction> _function;
    id <MTLComputePipelineState> _computePipelineState;
    id <MTLCommandQueue> _commandQueue;
    struct __CVMetalTextureCache *_textureCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(readonly, nonatomic) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_commandQueue;
@property(readonly, nonatomic) id <MTLComputePipelineState> computePipelineState; // @synthesize computePipelineState=_computePipelineState;
@property(readonly, nonatomic) id <MTLFunction> function; // @synthesize function=_function;
@property(readonly, nonatomic) id <MTLDevice> device;
@property(readonly, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
- (_Bool)requiresDepthData;
- (struct opaqueCMSampleBuffer *)render:(struct RenderData)arg1;
- (id)initWithMetalRenderCommand:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
