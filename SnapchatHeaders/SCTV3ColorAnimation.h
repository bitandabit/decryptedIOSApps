//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTV3Animation.h"

@interface SCTV3ColorAnimation : SCTV3Animation
{
    double _initialRGBA[4];
    double _taretRGBA[4];
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (void)updateForInterval:(double)arg1;
- (id)initWithCurve:(unsigned long long)arg1 fromInterval:(double)arg2 toInterval:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5 callback:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;

@end

