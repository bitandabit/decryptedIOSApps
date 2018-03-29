//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityListTrackItem.h"

@class NSDate, NSString, NSURL;

@interface SPTCollectionSongItem : NSObject <SPTCollectionEntityListTrackItem>
{
    _Bool _ratedExplicit;
    _Bool _premiumOnly;
    _Bool _localTrack;
    id <SPTCollectionSongItemPlaying> _delegate;
    NSString *_title;
    NSString *_subtitle;
    NSString *_artistName;
    NSString *_albumName;
    NSURL *_artistURL;
    NSURL *_albumURL;
    NSURL *_entityURL;
    NSURL *_trackURL;
    long long _icon;
    unsigned long long _contentType;
    NSURL *_imageURL;
    NSURL *_offlineURL;
    unsigned long long _subtitleType;
}

@property(nonatomic) unsigned long long subtitleType; // @synthesize subtitleType=_subtitleType;
@property(nonatomic, getter=isLocalTrack) _Bool localTrack; // @synthesize localTrack=_localTrack;
@property(copy, nonatomic) NSURL *offlineURL; // @synthesize offlineURL=_offlineURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(copy, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(copy, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(copy, nonatomic) NSURL *artistURL; // @synthesize artistURL=_artistURL;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <SPTCollectionSongItemPlaying> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly; // @synthesize premiumOnly=_premiumOnly;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *loggingContext;
@property(readonly, nonatomic) NSURL *previewURL;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (void)action;
- (id)initWithEntityURL:(id)arg1 trackURL:(id)arg2 trackName:(id)arg3 imageURL:(id)arg4 artistName:(id)arg5 artistURL:(id)arg6 albumName:(id)arg7 albumURL:(id)arg8 isPremiumOnly:(_Bool)arg9 isRatedExplicit:(_Bool)arg10 isLocalFile:(_Bool)arg11 subtitleType:(unsigned long long)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isNew;
@property(readonly, nonatomic) NSDate *publishDate;
@property(readonly) Class superclass;

@end

