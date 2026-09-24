/*
 * Generated with EmbeddedProto.
 * Licensed to: Embedded AMS B.V.
 *
 * This header is provided as part of an EmbeddedProto license.
 */
/*
 *  This file is generated with Embedded Proto, PLEASE DO NOT EDIT!
 *  source: request.proto
 *  Generated on: 2026-09-24T15:54:59 
 */

// This file is generated. Please do not edit!
#ifndef REQUEST_H
#define REQUEST_H

#include <cstdint>
#include <EmbeddedProto/Version.h>

//! The major version number of the Embedded Proto generator used to create this file.
#define REQUEST_GENERATOR_VERSION_MAJOR 4

//! The minor version number of the Embedded Proto generator used to create this file.
#define REQUEST_GENERATOR_VERSION_MINOR 0

//! The patch version number of the Embedded Proto generator used to create this file.
#define REQUEST_GENERATOR_VERSION_PATCH 0

static_assert(REQUEST_GENERATOR_VERSION_MAJOR == EMBEDDEDPROTO_VERSION_MAJOR,
    "Major version mismatch between generated code and library");

#if REQUEST_GENERATOR_VERSION_MINOR != EMBEDDEDPROTO_VERSION_MINOR
#warning "Minor version mismatch between generated code and library"
#endif

#include <EmbeddedProto/MessageInterface.h>
#include <EmbeddedProto/WireFormatter.h>
#include <EmbeddedProto/Fields.h>
#include <EmbeddedProto/MessageSizeCalculator.h>
#include <EmbeddedProto/ReadBufferSection.h>
#include <EmbeddedProto/RepeatedFieldFixedSize.h>
#include <EmbeddedProto/RepeatedFieldCallback.h>
#include <EmbeddedProto/MessageCallback.h>
#include <EmbeddedProto/FieldStringBytes.h>
#include <EmbeddedProto/BytesStringCallback.h>
#include <EmbeddedProto/Errors.h>
#include <EmbeddedProto/Defines.h>
#include <limits>
#include <type_traits>

// Include external proto definitions

namespace demo {

enum class types : uint32_t
{
  A = 0,
  B = 1
};

class request final: public ::EmbeddedProto::MessageInterface
{
  public:
    request() = default;
    request(const request& rhs )
    {
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
    }

    request(const request&& rhs ) noexcept
    {
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
    }

    ~request() = default;

    //! The full protobuf name of this message type, the name used in the type url of a google.protobuf.Any.
    static constexpr char const* MESSAGE_FULL_NAME = "demo.request";

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MSGID = 1,
      SELECTION = 2
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    //! State depth for partial serialization.
    static constexpr uint32_t STATE_DEPTH = 1;
    
    //! Convenience typedef for the state stack.
    using StateStack = ::EmbeddedProto::MessageStateStack<STATE_DEPTH>;
#endif

    request& operator=(const request& rhs)
    {
      
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
      return *this;
    }

    request& operator=(const request&& rhs) noexcept
    {
      
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
      return *this;
    }

    static constexpr char const* MSGID_NAME = "msgId";
    inline void clear_msgId() { msgId_.clear(); }
    inline void set_msgId(const uint32_t& value) { msgId_ = value; }
    inline void set_msgId(const uint32_t&& value) { msgId_ = value; }
    inline uint32_t& mutable_msgId() { return msgId_.get(); }
    inline const uint32_t& get_msgId() const { return msgId_.get(); }
    inline uint32_t msgId() const { return msgId_.get(); }

    static constexpr char const* SELECTION_NAME = "selection";
    inline void clear_selection() { selection_.clear(); }
    inline void set_selection(const types& value) { selection_ = value; }
    inline void set_selection(const types&& value) { selection_ = value; }
    inline types& mutable_selection() { return selection_.get(); }
    inline const types& get_selection() const { return selection_.get(); }
    inline types selection() const { return selection_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = msgId_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MSGID), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = selection_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SELECTION), buffer, false);
      }

      return return_value;
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    ::EmbeddedProto::Error deserialize_partial(::EmbeddedProto::ReadBufferInterface& buffer,
                                               ::EmbeddedProto::MessageState& state) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      bool continue_deserializing = true;

      while(continue_deserializing)
      {
        if(::EmbeddedProto::FieldProcessingPhase::TAG == state.phase)
        {
          state.field_id = 0U;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, state.wire_type, state.field_id);
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == state.wire_type)
            {
              // End of a DELIMITED (group) message. The END_GROUP tag is consumed and the
              // COMPLETE phase signals completion to the caller owning the framing
              // (deserialize_partial_as_group). Stop the loop here, the completion
              // handling below must not start the next field. Inside a length-delimited
              // field this tag is malformed, deserialize_partial_as_field rejects it.
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              continue_deserializing = false;
            }
            else
            {
              state.phase = (::EmbeddedProto::WireFormatter::WireType::LENGTH_DELIMITED == state.wire_type)
                ? ::EmbeddedProto::FieldProcessingPhase::SIZE
                : ::EmbeddedProto::FieldProcessingPhase::DATA;
            }
          }
        }

        if((::EmbeddedProto::Error::NO_ERRORS == return_value)
           && ((::EmbeddedProto::FieldProcessingPhase::SIZE == state.phase)
               || (::EmbeddedProto::FieldProcessingPhase::DATA == state.phase)))
        {
          switch(static_cast<FieldNumber>(state.field_id))
          {
            case FieldNumber::MSGID:
              return_value = msgId_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::VARINT);

              break;

            case FieldNumber::SELECTION:
              return_value = selection_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::VARINT);

              break;

            case FieldNumber::NOT_SET:
              return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
              break;

            default:
              return_value = skip_unknown_field_partial(buffer, state);
              break;
          }
        }

        if(continue_deserializing
           && (::EmbeddedProto::Error::NO_ERRORS == return_value)
           && (::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase))
        {
          state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
          state.field_id = 0U;
          state.size_value = 0U;
          state.bytes_remaining = 0U;
          state.element_index = 0U;
          if(nullptr != state.child)
          {
            state.child->reset();
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    }

    ::EmbeddedProto::Error serialize_partial(::EmbeddedProto::WriteBufferInterface& buffer, 
                                            ::EmbeddedProto::MessageState& state) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      
      // Get the field id to serialize (from state or start from first field)
      uint32_t field_id = state.field_id;

      static constexpr uint32_t STATIC_PARTIAL_ITERATION_BUDGET = 3U;
      const uint32_t serialized_size_value = max_serialized_size();
      uint32_t max_partial_iterations = STATIC_PARTIAL_ITERATION_BUDGET;
      if((std::numeric_limits<uint32_t>::max() - max_partial_iterations) > serialized_size_value)
      {
        max_partial_iterations += serialized_size_value;
      }
      else
      {
        max_partial_iterations = std::numeric_limits<uint32_t>::max();
      }
      
      // Iterate through fields based on state
      for(uint32_t iteration = 0;
          (iteration < max_partial_iterations)
          && (::EmbeddedProto::Error::NO_ERRORS == return_value)
          && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase);
          ++iteration)
      {
        // Determine which field to serialize based on field_id
        switch(field_id)
        {
          case 0:
            // Start of serialization - initialize state
            // Start with first regular field.
            // Keep this order aligned with serialize().
            state.field_id = static_cast<uint32_t>(FieldNumber::MSGID);
            state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
            field_id = state.field_id;
            break;
            
          case static_cast<uint32_t>(FieldNumber::MSGID):
            

            return_value = msgId_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::MSGID), buffer, state, false);

            break;
            
          case static_cast<uint32_t>(FieldNumber::SELECTION):
            

            return_value = selection_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::SELECTION), buffer, state, false);

            break;
            
          default:
            // All fields serialized
            state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
            break;
        }
        
        // Move to next field when current field is complete
        if((::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase) && 
           (::EmbeddedProto::Error::NO_ERRORS == return_value))
        {
          // Reset child state for nested messages before moving to next field
          if(nullptr != state.child)
          {
            state.child->reset();
          }

          // The next field starts with a clean count, a packed field otherwise
          // takes over the element index and byte count of the field before it.
          state.element_index = 0U;
          state.bytes_remaining = 0U;
          state.size_value = 0U;
          
          // Determine next field using switch-case
          switch(field_id)
          {
            case static_cast<uint32_t>(FieldNumber::MSGID):
              field_id = static_cast<uint32_t>(FieldNumber::SELECTION);
              state.field_id = field_id;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            case static_cast<uint32_t>(FieldNumber::SELECTION):
              // Last field - we're done
              field_id = 0;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              break;
              
            default:
              // Unknown field_id, mark complete
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              break;
          }
        }
      }

      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase))
      {
        return_value = ::EmbeddedProto::Error::STATE_MISMATCH;
      }
      
      return return_value;
    }
#endif

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      // If we did not already deserialize a tag, obtain the next one. When we did remember a tag 
      // have been deserializing a field which was not yet fully received in the read buffer.
      if(0 == deserialize_id_number_)
      {
        return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
      }

      bool continue_deserializing = ::EmbeddedProto::Error::NO_ERRORS == return_value;
      while(continue_deserializing)
      {
        // A DELIMITED (group) message terminates at its matching END_GROUP tag,
        // which has just been consumed. For a normal message this never occurs.
        if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == deserialize_wire_type_)
        {
          deserialize_id_number_ = 0;
          break;
        }

        id_tag = static_cast<FieldNumber>(deserialize_id_number_);
        switch(id_tag)
        {
          case FieldNumber::MSGID:
            return_value = msgId_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::SELECTION:
            return_value = selection_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, deserialize_wire_type_);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag but first reset the state such that in the case of an error reading 
          // the tag we will try again on the next call of this function.
          deserialize_id_number_ = 0;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
        
          if(::EmbeddedProto::Error::NO_ERRORS != return_value)
          {
            // If we reached the end of the buffer here assume the message is complete.
            if(::EmbeddedProto::Error::END_OF_BUFFER == return_value)
            {
              return_value = ::EmbeddedProto::Error::NO_ERRORS;
            }
            continue_deserializing = false;
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    };

    void clear() override
    {
      deserialize_id_number_ = 0;
      deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      clear_msgId();
      clear_selection();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::MSGID:
          name = MSGID_NAME;
          break;
        case FieldNumber::SELECTION:
          name = SELECTION_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

    //! Calculate the maximum number of bytes required to serialize this type of message.
    /*!
      This function does not take into account a possible id of this message object is self.
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size()
    {
      using namespace ::EmbeddedProto;
      return 
          EmbeddedProto::uint32::max_serialized_size(static_cast<uint32_t>(FieldNumber::MSGID))
          + EmbeddedProto::enumeration<types, EmbeddedProto::WireFormatter::VarintSize(1)>::max_serialized_size(static_cast<uint32_t>(FieldNumber::SELECTION))
        ;
    }

    //! Calculate the maximum number of bytes required to serialize this message including the field id number and tag.
    /*!
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size(const uint32_t field_number)
    {
      using namespace ::EmbeddedProto;
      return WireFormatter::VarintSize(WireFormatter::MakeTag(field_number, WireFormatter::WireType::LENGTH_DELIMITED)) // Size of the tag
        + WireFormatter::VarintSize(max_serialized_size()) // Length delimted value
        + max_serialized_size(); // Length of the serialized content
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
          left_chars.data += actual_chars_used;
          left_chars.size -= actual_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      left_chars = msgId_.to_string(left_chars, indent_level + 2, MSGID_NAME, true);
      left_chars = selection_.to_string(left_chars, indent_level + 2, SELECTION_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:



      //! The last id number deserialized from a tag. This is used as the internal state of the deserialize function.
      uint32_t deserialize_id_number_ = 0;
      //! The last wire type deserialized from a tag. This is used as the internal state of the deserialize function.
      ::EmbeddedProto::WireFormatter::WireType deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;

      EmbeddedProto::uint32 msgId_ = 0U;
      EmbeddedProto::enumeration<types, EmbeddedProto::WireFormatter::VarintSize(1)> selection_ = static_cast<types>(0);

};

} // End of namespace demo
#endif // REQUEST_H