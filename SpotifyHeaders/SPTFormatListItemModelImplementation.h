//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFormatListItemModel.h"

@class NSDictionary, NSString, NSURL;

@interface SPTFormatListItemModelImplementation : NSObject <SPTFormatListItemModel>
{
    _Bool _playable;
    _Bool _explicitItem;
    _Bool _backgroundable;
    _Bool _locallyPlayable;
    _Bool _inCollection;
    _Bool _banned;
    NSDictionary *_formatListAttributes;
    NSString *_name;
    NSURL *_URL;
    NSString *_UID;
    NSString *_artistName;
    NSURL *_artistURL;
    NSString *_albumName;
    NSURL *_albumURL;
    NSDictionary *_albumCovers;
    NSDictionary *_displayCovers;
    NSString *_freeformDescription;
    NSDictionary *_freezeFrames;
    NSDictionary *_covers;
    NSString *_manifestID;
    NSString *_mediaType;
    NSString *_previewID;
}

@property(nonatomic, getter=isBanned) _Bool banned; // @synthesize banned=_banned;
@property(nonatomic, getter=isInCollection) _Bool inCollection; // @synthesize inCollection=_inCollection;
@property(nonatomic, getter=isLocallyPlayable) _Bool locallyPlayable; // @synthesize locallyPlayable=_locallyPlayable;
@property(nonatomic, getter=isBackgroundable) _Bool backgroundable; // @synthesize backgroundable=_backgroundable;
@property(nonatomic, getter=isExplicitItem) _Bool explicitItem; // @synthesize explicitItem=_explicitItem;
@property(nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=_playable;
@property(copy, nonatomic) NSString *previewID; // @synthesize previewID=_previewID;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *manifestID; // @synthesize manifestID=_manifestID;
@property(retain, nonatomic) NSDictionary *covers; // @synthesize covers=_covers;
@property(retain, nonatomic) NSDictionary *freezeFrames; // @synthesize freezeFrames=_freezeFrames;
@property(copy, nonatomic) NSString *freeformDescription; // @synthesize freeformDescription=_freeformDescription;
@property(retain, nonatomic) NSDictionary *displayCovers; // @synthesize displayCovers=_displayCovers;
@property(retain, nonatomic) NSDictionary *albumCovers; // @synthesize albumCovers=_albumCovers;
@property(retain, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSURL *artistURL; // @synthesize artistURL=_artistURL;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *UID; // @synthesize UID=_UID;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

