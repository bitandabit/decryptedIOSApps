//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCPeekingAppInstallExperimentContext : SCExperimentContext
{
    _Bool _enablePeekingAppInstall;
    double _peekingAppInstallBounceUpDistance;
    NSString *_blacklistedAppIds;
}

@property(readonly, nonatomic) NSString *blacklistedAppIds; // @synthesize blacklistedAppIds=_blacklistedAppIds;
@property(readonly, nonatomic) double peekingAppInstallBounceUpDistance; // @synthesize peekingAppInstallBounceUpDistance=_peekingAppInstallBounceUpDistance;
@property(readonly, nonatomic) _Bool enablePeekingAppInstall; // @synthesize enablePeekingAppInstall=_enablePeekingAppInstall;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

