//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIContext, CIFilter;

@interface SCStillImageDepthBlurFilter : NSObject
{
    CIContext *_context;
    CIFilter *_filter;
    struct __CVPixelBufferPool *_bufferPool;
}

- (void).cxx_destruct;
- (id)renderWithPhotoData:(id)arg1 renderData:(struct RenderData)arg2;
- (void)dealloc;
- (id)init;

@end

