//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTZeroCrossing : NSObject
{
    float durx;
    float dury;
    float durz;
    float prevx;
    float prevy;
    float prevz;
    float prevvx;
    float prevvy;
    float prevvz;
    double zc_upx;
    double zc_upy;
    double zc_upz;
    double zc_dox;
    double zc_doy;
    double zc_doz;
    double zc_tox;
    double zc_toy;
    double zc_toz;
    double zc_box;
    double zc_boy;
    double zc_boz;
    unsigned long long numFrames;
}

@property(readonly, nonatomic) float durz; // @synthesize durz;
@property(readonly, nonatomic) float dury; // @synthesize dury;
@property(readonly, nonatomic) float durx; // @synthesize durx;
- (void)compute:(id)arg1;
- (id)init;

@end

