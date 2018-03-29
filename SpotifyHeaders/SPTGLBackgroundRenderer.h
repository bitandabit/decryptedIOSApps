//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTGLRenderer.h"

@class NSString, SPTGLOrthoMatrix, SPTGLSLProgram, SPTGLViewInfo, UIColor;

@interface SPTGLBackgroundRenderer : NSObject <SPTGLRenderer>
{
    _Bool _lightsOn;
    unsigned int _vao;
    unsigned int _buffer;
    int _frameCount;
    float _layerOpacity;
    SPTGLSLProgram *_program;
    UIColor *_topColor;
    SPTGLViewInfo *_viewInfo;
    SPTGLOrthoMatrix *_orthoMatrix;
    float *_translateMatrix;
}

@property(nonatomic) float *translateMatrix; // @synthesize translateMatrix=_translateMatrix;
@property(nonatomic) float layerOpacity; // @synthesize layerOpacity=_layerOpacity;
@property(retain, nonatomic) SPTGLOrthoMatrix *orthoMatrix; // @synthesize orthoMatrix=_orthoMatrix;
@property(nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) SPTGLViewInfo *viewInfo; // @synthesize viewInfo=_viewInfo;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
@property(retain, nonatomic) SPTGLSLProgram *program; // @synthesize program=_program;
@property(nonatomic) unsigned int buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned int vao; // @synthesize vao=_vao;
@property(nonatomic) _Bool lightsOn; // @synthesize lightsOn=_lightsOn;
- (void).cxx_destruct;
- (void)draw;
- (void)addUniforms;
- (void)updateTranslateMatrixX:(float)arg1 y:(float)arg2 cosC:(float)arg3 sinC:(float)arg4;
- (void)update;
- (void)updateWithViewInfo:(id)arg1;
- (void)setViewportForWidth:(int)arg1 height:(int)arg2;
- (void)setup;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

