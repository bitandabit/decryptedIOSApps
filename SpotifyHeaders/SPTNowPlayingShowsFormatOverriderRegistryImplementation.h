//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingShowsFormatOverriderRegistry.h"

@class NSHashTable, NSString;

@interface SPTNowPlayingShowsFormatOverriderRegistryImplementation : NSObject <SPTNowPlayingShowsFormatOverriderRegistry>
{
    NSHashTable *_registrants;
}

@property(retain, nonatomic) NSHashTable *registrants; // @synthesize registrants=_registrants;
- (void).cxx_destruct;
- (void)removeRegistrant:(id)arg1;
- (void)addRegistrant:(id)arg1;
- (_Bool)shouldPresentShowsFormatNPVForTrack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

