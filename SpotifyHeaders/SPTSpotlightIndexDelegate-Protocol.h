//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol SPTSpotlightIndexDelegate <NSObject>
- (void)indexDidDrop:(id <SPTSpotlightIndexRegistry>)arg1;
- (void)indexDidEndIndexing:(id <SPTSpotlightIndexRegistry>)arg1 error:(NSError *)arg2;
- (void)indexDidStartIndexing:(id <SPTSpotlightIndexRegistry>)arg1;
- (_Bool)shouldUpdateIndex:(id <SPTSpotlightIndexRegistry>)arg1;
@end
