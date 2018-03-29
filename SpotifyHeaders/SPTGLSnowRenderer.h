//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGLRenderer.h"

@class NSString, SPTGLOrthoMatrix, SPTGLSLProgram, SPTGLViewInfo;

@interface SPTGLSnowRenderer : NSObject <SPTGLRenderer>
{
    _Bool _lightsOn;
    unsigned int _geometryBuffer;
    int _sourceIndex;
    int _destinationIndex;
    unsigned int _snowTexture;
    unsigned int _renderingVao;
    int _elapsedFrames;
    int _snowflakesCount;
    SPTGLViewInfo *_viewInfo;
    unsigned int *_vaos;
    unsigned int *_buffers;
    SPTGLSLProgram *_program;
    SPTGLOrthoMatrix *_orthoMatrix;
    float *_attributes;
}

@property(nonatomic) float *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) int snowflakesCount; // @synthesize snowflakesCount=_snowflakesCount;
@property(nonatomic) int elapsedFrames; // @synthesize elapsedFrames=_elapsedFrames;
@property(nonatomic) unsigned int renderingVao; // @synthesize renderingVao=_renderingVao;
@property(retain, nonatomic) SPTGLOrthoMatrix *orthoMatrix; // @synthesize orthoMatrix=_orthoMatrix;
@property(retain, nonatomic) SPTGLSLProgram *program; // @synthesize program=_program;
@property(nonatomic) unsigned int snowTexture; // @synthesize snowTexture=_snowTexture;
@property(nonatomic) unsigned int *buffers; // @synthesize buffers=_buffers;
@property(nonatomic) unsigned int *vaos; // @synthesize vaos=_vaos;
@property(nonatomic) int destinationIndex; // @synthesize destinationIndex=_destinationIndex;
@property(nonatomic) int sourceIndex; // @synthesize sourceIndex=_sourceIndex;
@property(nonatomic) unsigned int geometryBuffer; // @synthesize geometryBuffer=_geometryBuffer;
@property(retain, nonatomic) SPTGLViewInfo *viewInfo; // @synthesize viewInfo=_viewInfo;
@property(nonatomic) _Bool lightsOn; // @synthesize lightsOn=_lightsOn;
- (void).cxx_destruct;
- (void)floatAttribute:(int)arg1 size:(int)arg2 floatStride:(int)arg3 floatOffset:(int)arg4;
- (void)draw;
- (void)update;
- (void)updateWithViewInfo:(id)arg1;
- (void)setViewportForWidth:(int)arg1 height:(int)arg2;
- (int)sourceBuffer;
- (int)sourceVao;
- (void)generateSnowFlakes;
- (float)randFloat:(float)arg1 b:(float)arg2;
- (void)loadShaders;
- (void)setupBuffer:(int)arg1;
- (void)setupPingPongBuffers;
- (void)initGeometry;
- (unsigned int)setupTexture:(id)arg1;
- (void)setup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

