//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCPUCommand.h"

@class NSArray;

@interface SCImageProcessCPUAnimatedDrawCommand : SCImageProcessCPUCommand
{
    NSArray *_images;
    NSArray *_coordinateProviders;
}

- (void).cxx_destruct;
- (id)runWithContext:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3 orientation:(long long)arg4;
- (id)initWithImages:(id)arg1 vertexCoordinatesProviders:(id)arg2;

@end

