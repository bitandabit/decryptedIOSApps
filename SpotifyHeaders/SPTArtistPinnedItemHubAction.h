//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBAction.h"

@class SPTArtistLogger;

@interface SPTArtistPinnedItemHubAction : NSObject <HUBAction>
{
    SPTArtistLogger *_logger;
}

@property(retain, nonatomic) SPTArtistLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)performWithContext:(id)arg1;
- (id)initWithLogger:(id)arg1;

@end

