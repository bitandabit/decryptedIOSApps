//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAdProviderResponse.h"

@class FBAdPlacement;

@interface FBAdProviderResponseAds : FBAdProviderResponse
{
    FBAdPlacement *_adPlacement;
}

@property(retain, nonatomic) FBAdPlacement *adPlacement; // @synthesize adPlacement=_adPlacement;
- (void).cxx_destruct;
- (id)initWithAdPlacement:(id)arg1;
- (id)initWithType:(long long)arg1;

@end

