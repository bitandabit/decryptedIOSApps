//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFilterSwipeMetadata.h"

@class NSMutableSet, NSString;

@interface SCVenueFilterSwipeMetadata : SCFilterSwipeMetadata
{
    NSString *_venueFilterArray;
    unsigned long long _venueTapIndex;
    NSString *_venueID;
    NSMutableSet *_venuesSeen;
}

@property(readonly, nonatomic) NSMutableSet *venuesSeen; // @synthesize venuesSeen=_venuesSeen;
@property(copy, nonatomic) NSString *venueID; // @synthesize venueID=_venueID;
@property(nonatomic) unsigned long long venueTapIndex; // @synthesize venueTapIndex=_venueTapIndex;
@property(copy, nonatomic) NSString *venueFilterArray; // @synthesize venueFilterArray=_venueFilterArray;
- (void).cxx_destruct;
- (id)init;

@end

