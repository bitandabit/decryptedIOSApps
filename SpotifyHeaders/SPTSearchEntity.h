//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSearchSerializable.h"

@class NSString, NSURL;

@interface SPTSearchEntity : NSObject <SPTSearchSerializable>
{
    _Bool _subtitleIsNumeric;
    _Bool _searchStringShouldBeMarkedInSubtitle;
    _Bool _playable;
    _Bool _verified;
    _Bool _interactive;
    _Bool _hasExplicitContent;
    _Bool _hasPremiumOnlyContent;
    _Bool _accessory;
    NSString *_typeIdentifier;
    NSURL *_URL;
    NSString *_title;
    NSString *_subtitlePrefix;
    NSString *_subtitle;
    NSURL *_imageURL;
    long long _imageStyle;
    id _loggingData;
    unsigned long long _contextMenuType;
    NSURL *_artistURL;
    NSString *_artistTitle;
    NSURL *_albumURL;
    NSString *_albumTitle;
}

@property(readonly, copy, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(readonly, copy, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(readonly, copy, nonatomic) NSString *artistTitle; // @synthesize artistTitle=_artistTitle;
@property(readonly, copy, nonatomic) NSURL *artistURL; // @synthesize artistURL=_artistURL;
@property(readonly, nonatomic, getter=isAccessory) _Bool accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) unsigned long long contextMenuType; // @synthesize contextMenuType=_contextMenuType;
@property(readonly, nonatomic) _Bool hasPremiumOnlyContent; // @synthesize hasPremiumOnlyContent=_hasPremiumOnlyContent;
@property(readonly, nonatomic) _Bool hasExplicitContent; // @synthesize hasExplicitContent=_hasExplicitContent;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic, getter=isVerified) _Bool verified; // @synthesize verified=_verified;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=_playable;
@property(readonly, nonatomic) id loggingData; // @synthesize loggingData=_loggingData;
@property(readonly, nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) _Bool searchStringShouldBeMarkedInSubtitle; // @synthesize searchStringShouldBeMarkedInSubtitle=_searchStringShouldBeMarkedInSubtitle;
@property(readonly, nonatomic) _Bool subtitleIsNumeric; // @synthesize subtitleIsNumeric=_subtitleIsNumeric;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *subtitlePrefix; // @synthesize subtitlePrefix=_subtitlePrefix;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)placeholderImageForSize:(long long)arg1;
- (id)initWithTypeIdentifier:(id)arg1 URL:(id)arg2 title:(id)arg3 subtitlePrefix:(id)arg4 subtitle:(id)arg5 subtitleIsNumeric:(_Bool)arg6 markSearchStringInSubtitle:(_Bool)arg7 imageURL:(id)arg8 imageStyle:(long long)arg9 loggingData:(id)arg10 isPlayable:(_Bool)arg11 isVerified:(_Bool)arg12 isInteractive:(_Bool)arg13 hasExplicitContent:(_Bool)arg14 hasPremiumOnlyContent:(_Bool)arg15 contextMenuType:(unsigned long long)arg16 isAccessory:(_Bool)arg17 artistURL:(id)arg18 artistTitle:(id)arg19 albumURL:(id)arg20 albumTitle:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
