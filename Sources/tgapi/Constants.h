#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define kAccountUpdateOnlineStatus 1713919532
#define kMessagesSetTypingAction 1486110434
#define kMessagesReadHistory 238054714
#define kStoriesReadStories -1521034552
#define kGetSponsoredMessages -1680673735
#define kSendScreenshotNotification -1589618665
// messages.readMessageContents#36a73f77 — sent when TTL/disappearing media is
// opened
#define kMessagesReadMessageContents 917472119
// upload.getFile#be5335be / upload.getCdnFile#2000bcc3 — file chunk downloads
#define kUploadGetFile      -1101843010
#define kUploadGetCdnFile   -1691921240

#define kActionIDTyping 381645902           // .sendMessageTypingAction
#define kActionIDRecordingVideo -1584933265 // .sendMessageRecordVideoAction
#define kActionIDUploadingVideo -378127636  // .sendMessageUploadVideoAction
#define kActionIDRecordingAudio -718310409  // .sendMessageRecordAudioAction
#define kActionIDUploadingVoice -212740181  // .sendMessageUploadAudioAction
#define kActionIDUploadingPhoto -774682074  // .sendMessageUploadPhotoAction
#define kActionIDUploadingFile -1441998364  // .sendMessageUploadDocumentAction
#define kActionIDChoosingLocation 393186209 // .sendMessageGeoLocationAction
#define kActionIDChoosingContact 1653390447 // .sendMessageChooseContactAction
#define kActionIDPlayingGame -580219064     // .sendMessageGamePlayAction
#define kActionIDRecordingRoundVideo                                           \
  -1997373508                                   // .sendMessageRecordRoundAction
#define kActionIDUploadingRoundVideo 608050278  // .sendMessageUploadRoundAction
#define kActionIDSpeakingInGroupCall -651419003 // .speakingInGroupCallAction
#define kActionIDReserverHistoryImport                                         \
  -606432698                                 // .sendMessageHistoryImportAction
#define kActionIDChoosingSticker -1336228175 // .sendMessageChooseStickerAction
#define kActionIDEmojiInteraction 630664139  // .sendMessageEmojiInteraction
#define kActionIDEmojiAcknowledgement                                          \
  -1234857938 // .sendMessageEmojiInteractionSeen

#define kGhostModeEnabled @"MonoGhostModeEnabled"
#define kGhostDetailsToggle @"MonoGhostDetailsToggle"
#define kDisableOnlineStatus @"disableOnlineStatus"

#define kDisableTypingStatus @"disableTypingStatus"
#define kDisableRecordingVideoStatus @"disableRecordingVideoStatus"
#define kDisableUploadingVideoStatus @"disableUploadingVideoStatus"
#define kDisableRecordingVoiceStatus @"disableRecordingVoiceStatus"
#define kDisableUploadingVoiceStatus @"disableUploadingVoiceStatus"
#define kDisableUploadingPhotoStatus @"disableUploadingPhotoStatus"
#define kDisableUploadingFileStatus @"disableUploadingFileStatus"
#define kDisableChoosingLocationStatus @"disableChoosingLocationStatus"
#define kDisableChoosingContactStatus @"disableChoosingContactStatus"
#define kDisablePlayingGameStatus @"disablePlayingGameStatus"
#define kDisableRecordingRoundVideoStatus @"disableRecordingRoundVideoStatus"
#define kDisableUploadingRoundVideoStatus @"disableUploadingRoundVideoStatus"
#define kDisableSpeakingInGroupCallStatus @"disableSpeakingInGroupCallStatus"
#define kDisableChoosingStickerStatus @"disableChoosingStickerStatus"
#define kDisableEmojiInteractionStatus @"disableEmojiInteractionStatus"
#define kDisableEmojiAcknowledgementStatus @"disableEmojiAcknowledgementStatus"

#define kDisableMessageReadReceipt @"disableMessageReadReceipt"
#define kDisableStoriesReadReceipt @"disableStoriesReadReceipt"
#define kDisableScreenshotNotification @"disableScreenshotNotification"

// FIX: was incorrectly mapped to "disableOnlineStatus" — now has its own key
#define kDisableAllAds @"disableAllAds"
#define kDisableForwardRestriction @"disableForwardRestriction"

// Anti-features
#define kAntiRevoke @"MonoAntiRevoke"
#define kAntiEdit @"MonoAntiEdit"
// Key for preventing disappearing/self-destruct media from being marked as read
#define kAntiSelfDestruct @"MonoAntiSelfDestruct"
#define kAntiAutoDelete @"MonoAntiAutoDelete"
#define kConfirmCalls @"MonoConfirmCalls"
#define kHideStories @"MonoHideStories"
#define kDownloadStories @"MonoDownloadStories"

#define FAKE_LOCATION_ENABLED_KEY @"MonoFakeLocation"
#define FAKE_LATITUDE_KEY @"MonoSavedLatitude"
#define FAKE_LONGITUDE_KEY @"MonoSavedLongitude"

#define FILE_PICKER_FIX_KEY @"MonoFixFilePicker"
#define FILE_PICKER_PATH @"MonoFileFixUsingSomeUglyHacks"

// Download speed boost: 0 = off, 1 = medium (512KB/8 parts), 2 = maximum (1MB/12 parts)
#define kDownloadSpeedBoost @"MonoDownloadSpeedBoost"

// Send audio/video files as voice messages
#define kSendAsVoice @"MonoSendAsVoice"
