//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTV3Animation.h"

@interface SCTV3SizeAnimation : SCTV3Animation
{
    struct CGSize _fromValue;
    struct CGSize _toValue;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
- (void)updateForInterval:(double)arg1;
- (id)initWithCurve:(unsigned long long)arg1 fromInterval:(double)arg2 toInterval:(double)arg3 fromValue:(struct CGSize)arg4 toValue:(struct CGSize)arg5 callback:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;

@end

