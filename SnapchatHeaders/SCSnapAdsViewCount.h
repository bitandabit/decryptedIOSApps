//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSnapAdsSnapAdsMetrics-Protocol.h"

@class NSString;

@interface SCSnapAdsViewCount : NSObject <SCSnapAdsSnapAdsMetrics>
{
    long long _adType;
    unsigned long long _adProductType;
}

- (id)getParams;
- (id)getName;
- (id)initWithAdType:(long long)arg1 adProductType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

