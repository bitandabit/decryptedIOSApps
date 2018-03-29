//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCXFlightPathRenderer : NSObject
{
    unsigned int _program;
    unsigned int _vertexShader;
    unsigned int _fragShader;
    unsigned int _vbo;
    unsigned int _ebo;
    unsigned int _positionAttributeLocation;
    unsigned int _totalLengthUniform;
    unsigned int _currentLengthUniform;
    unsigned int _minWidthUniform;
    unsigned int _maxWidthUniform;
    unsigned int _shadowWidthUniform;
    _Bool _readyToRender;
    struct __GLsync *_fence;
}

- (void)complete;
- (void)renderPath:(id)arg1 context:(id)arg2;
- (void)_prepareRender;
- (void)prepare;
- (id)init;

@end

