//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryActivityItemProvider.h"

@protocol SCGallerySnap;

@interface SCGallerySnapActivityItemProvider : SCGalleryActivityItemProvider
{
    id <SCGallerySnap> _snap;
}

@property(retain, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
- (void).cxx_destruct;
- (id)initWithSnap:(id)arg1;

@end

